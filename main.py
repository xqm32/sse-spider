import json
import logging
import os
import re
from typing import List

import pandas
import requests
from lxml.etree import HTML
from rich import print
from rich.logging import RichHandler
from rich.progress import track
from rich.prompt import Prompt
from rich.traceback import install

install()

FORMAT = '%(message)s'
logging.basicConfig(
    level='INFO',
    format=FORMAT,
    datefmt='[%X]',
    handlers=[RichHandler(rich_tracebacks=True)]
)

log = logging.getLogger('rich')


class Trainer:
    def __init__(self, siteConfig: dict) -> None:
        savePath = siteConfig['savePath']
        scheme = siteConfig['scheme']
        host = siteConfig['host']
        self.baseURL = f'{scheme}://{host}'
        self.session = requests.session()
        self.authID = None
        self.savePath = savePath

        self.ignoreExisted = siteConfig['ignoreExisted']
        self.ignoreZero = siteConfig['ignoreZero']
        self.limitGold = siteConfig['limitGold']

    def login(self, username: str, password: str) -> requests.Session:
        '''登录'''
        loginASPX = self.session.get(f'{self.baseURL}/train/login.aspx')
        html = HTML(loginASPX.text)

        hidden = html.xpath('//input[@type="hidden"]')
        data = {i.get('name'): i.get('value') for i in hidden}
        data.update({
            '__EVENTTARGET': '',
            '__EVENTARGUMENT': '',
            'ctl00$ContentPlaceHolder1$login1$TextBox1': username,
            'ctl00$ContentPlaceHolder1$login1$TextBox2': password,
            'ctl00$ContentPlaceHolder1$login1$Button1': '登录',
        })

        imgASPX = self.session.get(
            f'{self.baseURL}/train/action/img.aspx'
        )
        with open('verCode.png', 'wb') as f:
            f.write(imgASPX.content)

        while True:
            print('请打开当前目录下的 [green]verCode.png[/green] 文件以查看验证码')
            verCode = Prompt.ask(
                '请输入验证码（回车更换）',
                default='r',
                show_default=False
            )

            if (verCode == 'r'):
                imgASPX = self.session.get(
                    f'{self.baseURL}/train/action/img.aspx'
                )
                with open('verCode.png', 'wb') as f:
                    f.write(imgASPX.content)
                continue

            data.update({
                'ctl00$ContentPlaceHolder1$login1$TextBox3': verCode,
            })

            loginASPX = self.session.post(
                f'{self.baseURL}/train/login.aspx',
                data=data
            )
            if '验证码错误' in loginASPX.text:
                log.error('验证码错误')
            elif '密码错误' in loginASPX.text:
                log.error('密码错误')
            else:
                log.info('登录成功', extra={"markup": True})
                break

        self.authID = re.findall(r'auth_id=(.*)', loginASPX.url)[0]
        return self.session

    def history(self, maxPage: int = None) -> List[str]:
        '''查看做题历史'''
        historyASPX = self.session.get(
            f'{self.baseURL}/train/history.aspx',
            params={'auth_id': self.authID}
        )
        html = HTML(historyASPX.text)

        lastPage = html.xpath('//a[contains(text(),"尾页")]')[0].get('href')
        totalPages = \
            int(lastPage.split("'")[-2]) \
            if maxPage is None \
            else maxPage

        hidden = html.xpath('//input[@type="hidden"]')
        data = {i.get('name'): i.get('value') for i in hidden}

        sessionID = []
        for i in range(1, totalPages+1):
            data.update({
                '__EVENTTARGET': 'ctl00$ContentPlaceHolder1$history1$AspNetPager1',
                '__EVENTARGUMENT': i,
            })

            historyASPX = self.session.post(
                f'{self.baseURL}/train/history.aspx',
                params={'auth_id': self.authID},
                data=data
            )

            html = HTML(historyASPX.text)

            courses = html.xpath('//div[@class="courseShowFile1"]')
            for i in courses:
                score = i.xpath('.//span[@class="score"]')[0].text
                if not self.ignoreZero or score != '0':
                    ID = i.get('onclick').split("'")[-2]
                    sessionID.append(ID)

        return sessionID

    def pickUpQuestion(self, tagID=0, level=0) -> str:
        '''随机抽选一道题'''
        pickUpQASPX = self.session.get(
            f'{self.baseURL}/train/action/pick-up-q.aspx',
            params={
                'auth_id': self.authID,
                'tag_id': tagID,
                'level': level,
            }
        )
        sessionID = pickUpQASPX.text.split(':')[-1]
        return sessionID

    def submitQuestion(self, sessionID: str) -> None:
        qASPX = self.session.get(
            f'{self.baseURL}/train/q.aspx',
            params={
                'auth_id': self.authID,
                'session_id': sessionID,
            }
        )
        html = HTML(qASPX.text)

        hidden = html.xpath('//input[@type="hidden"]')
        data = {i.get('name'): i.get('value') for i in hidden}
        data.update({
            'ctl00$ContentPlaceHolder1$q1$Button1': 'Button',
            'editor1': ''
        })

        qASPX = self.session.post(
            f'{self.baseURL}/train/q.aspx',
            params={
                'auth_id': self.authID,
                'session_id': sessionID,
            },
            data=data
        )

        scoreASPX = self.session.get(
            f'{self.baseURL}/train/action/score.aspx',
            params={
                'auth_id': self.authID,
                'session_id': sessionID,
            }
        )

        if scoreASPX.status_code != 200:
            log.error(f'得分获取错误，状态码为 {scoreASPX.status_code}')

        self.session.post(
            f'{self.baseURL}/train/action/post-rate.aspx',
            params={
                'auth_id': self.authID,
                'session_id': sessionID,
            },
            data={'rate': '1'}
        )

    def getProfile(self) -> pandas.DataFrame:
        '''获取个人资料'''
        profileASPX = self.session.get(
            f'{self.baseURL}/train/profile.aspx',
            params={'auth_id': self.authID}
        )

        profile = pandas.read_html(profileASPX.text)[1]
        profile = profile.set_index(0)

        return profile[1]

    def getGold(self) -> int:
        '''获取金币数量'''
        profile = self.getProfile()
        return int(profile['金币数'])

    def totalGold(self) -> int:
        '''总计所需的金币'''
        howMuch = len(self.history())*10
        return howMuch

    def neededGold(self) -> int:
        '''计算所需的金币与已有的金币的差值'''
        howMuch = self.totalGold()
        need = howMuch - self.getGold()
        log.info(f'需要支付 {howMuch} 金币，还需 {need} 金币')
        return need

    def getCode(self, sessionID: str) -> str | None:
        '''获取代码'''
        getCodeASPX = self.session.get(
            f'{self.baseURL}/train/action/get-code.aspx',
            params={'session_id': sessionID}
        )
        html = HTML(getCodeASPX.text)

        code = html.xpath('//pre')[0].text
        return code

    def saveCode(self, sessionID: str) -> str:
        if not os.path.exists('codes'):
            os.mkdir('codes')

        viewASPX = self.session.get(
            f'{self.baseURL}/train/view.aspx',
            params={
                'auth_id': self.authID,
                'session_id': sessionID
            }
        )
        html = HTML(viewASPX.text)

        id = html.xpath('//div[@class="q"]/@id')[0]
        if self.ignoreExisted and os.path.exists(f'codes/{id}.c'):
            log.info(
                f'[yellow]{id}.c[/yellow] 已存在',
                extra={"markup": True}
            )
            return 'existed'
        else:
            log.info(f'正在下载 [blue]{id}.c[/blue]', extra={"markup": True})

        code = self.getCode(sessionID)

        if code is None:
            log.error(f'{id}.c 下载失败，sessionID 为 {sessionID}')
            return 'failed'
        elif '余额不足' in code:
            log.error('余额不足')
            return 'insufficient'
        else:
            with open(f'codes/{id}.c', 'w', encoding='utf-8_sig') as f:
                f.write(code)
            return 'downloaded'

    def crawlCodes(self, sessionID) -> None:
        '''批量爬取代码'''
        existed: int = 0
        downloaded: int = 0
        gold: int = self.getGold()

        for i in track(sessionID, description='正在爬取代码'):
            if (gold - 10 < self.limitGold):
                log.info(f'已达到限制金币数 {self.limitGold}，结束爬取')
                break
            result = self.saveCode(i)
            match result:
                case 'insufficient':
                    break
                case 'failed':
                    continue
                case 'existed':
                    existed += 1
                case 'downloaded':
                    downloaded += 1
                    gold -= 10

        realGold = self.getGold()
        log.info(f'当前余额: {realGold}')
        log.info(
            f'新下载 {downloaded} 个代码，{existed} 个已存在',
            extra={"markup": True}
        )

    def incGold(self, howMuch, sessionID=None) -> None:
        '''增加金币数量'''
        if howMuch < 1:
            return

        if sessionID is None:
            for i in track(self.history(), description='正在寻找金币'):
                sessionID = i
                viewASPX = self.session.get(
                    f'{self.baseURL}/train/view.aspx',
                    params={
                        'session_id': sessionID,
                        'auth_id': self.authID
                    }
                )
                # 检查重新评分按键是否在其中
                if '"重新评分"' in viewASPX.text:
                    break
        else:
            viewASPX = self.session.get(
                f'{self.baseURL}/train/view.aspx',
                params={
                    'session_id': sessionID,
                    'auth_id': self.authID
                }
            )
        html = HTML(viewASPX.text)

        hidden = html.xpath('//input[@type="hidden"]')
        data = {i.get('name'): i.get('value') for i in hidden}
        data.update({
            'ctl00$ContentPlaceHolder1$view1$print$Button2': '重新评分',
            'ctl00$ContentPlaceHolder1$view1$print$TextBox1': ''
        })

        gold = self.getGold()

        for i in range(howMuch):
            viewASPX = self.session.post(
                f'{self.baseURL}/train/view.aspx',
                params={
                    'session_id': sessionID,
                    'auth_id': self.authID
                },
                data=data
            )
            if viewASPX.status_code not in {302, 200}:
                log.error(f'{sessionID} 出现错误')
                break
            log.info(f'当前余额 {gold+i+1}/{gold+howMuch}')

        realGold = self.getGold()
        if gold+howMuch != realGold:
            log.error(f'余额错误，当前余额实际为 {realGold}')


if __name__ == '__main__':
    with open('config.json', encoding='utf-8') as f:
        config = json.load(f)
    trainer = Trainer(config['siteConfig'])
    trainer.login(config['username'], config['password'])
    # 方法一：爬取历史题目
    trainer.neededGold()
    n = int(Prompt.ask('需要增加多少金币'))
    trainer.incGold(n)
    trainer.crawlCodes(trainer.history())
    # # 方法二：爬取新题目
    # sid = trainer.pickUpQuestion()
    # trainer.submitQuestion(sid)
    # trainer.saveCode(sid)
    # # 方法三：消耗金币术（新题目）
    # 此方法不能忽略已存在
    # trainer.ignoreExisted = False
    # n = int(Prompt.ask('需要消耗多少金币'))
    # for i in range(n//10+1):
    #     sid = trainer.pickUpQuestion()
    #     trainer.submitQuestion(sid)
    #     trainer.saveCode(sid)
    # log.info(f'剩余金币 {trainer.getGold()}')
    # # 方法四：消耗金币术（历史题目）
    # trainer.ignoreExisted = False
    # trainer.ignoreZero = False
    # trainer.crawlCodes(trainer.history())
