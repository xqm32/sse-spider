import json
import os
import re
from typing import List

import maya
import pandas
import requests
from lxml.etree import HTML
from rich import print
from rich.progress import Progress, track
from rich.prompt import Prompt

from SSELog import log
from SSELogin import *
from SSException import *


class Trainer:
    def __init__(self, siteConfig: dict) -> None:
        # 站点相关设置
        savePath = siteConfig["savePath"]
        scheme = siteConfig["scheme"]
        host = siteConfig["host"]
        self.baseURL = f"{scheme}://{host}"
        self.session = requests.session()

        # 题目相关设置
        self.savePath = savePath
        self.ignoreExisted = siteConfig["ignoreExisted"]
        self.ignoreZero = siteConfig["ignoreZero"]

        # 金币相关设置
        self.limitGold = siteConfig["limitGold"]
        self.keepGold = siteConfig["keepGold"]

        # 登录相关变量
        self.logged: set = set()
        self.profile: dict = None
        self.authID: str = None
        self.sessionID: dict = None

    # @Login
    # 以下为登录相关方法

    @willLogin("SSE")
    def login(self, username: str, password: str) -> requests.Session:
        """登录"""
        log.info(f"正在登录 {username}")

        # 解析 HTML
        loginASPX = self.session.get(f"{self.baseURL}/train/login.aspx")
        html = HTML(loginASPX.text)

        # hidden 表单获取
        hidden = html.xpath('//input[@type="hidden"]')
        data = {i.get("name"): i.get("value") for i in hidden}
        data.update(
            {
                "__EVENTTARGET": "",
                "__EVENTARGUMENT": "",
                "ctl00$ContentPlaceHolder1$login1$TextBox1": username,
                "ctl00$ContentPlaceHolder1$login1$TextBox2": password,
                "ctl00$ContentPlaceHolder1$login1$Button1": "登录",
            }
        )

        # 获取验证码
        imgASPX = self.session.get(f"{self.baseURL}/train/action/img.aspx")
        with open("verCode.png", "wb") as f:
            f.write(imgASPX.content)

        # 主循环
        while True:
            print("打开 [green]verCode.png[/] 查看验证码（回车更换）")
            verCode = Prompt.ask("请输入验证码", default="r", show_default=False)
            if verCode == "r":
                # 获取验证码
                imgASPX = self.session.get(f"{self.baseURL}/train/action/img.aspx")
                with open("verCode.png", "wb") as f:
                    f.write(imgASPX.content)
                continue

            # 更新数据
            data.update({"ctl00$ContentPlaceHolder1$login1$TextBox3": verCode})

            # 提交数据
            loginASPX = self.session.post(f"{self.baseURL}/train/login.aspx", data=data)
            if "验证码错误" in loginASPX.text:
                log.error("验证码错误")
            elif "密码错误" in loginASPX.text:
                raise LoginError("密码错误")
            else:
                log.info("[green]登录成功[/]", extra={"markup": True})
                break

        # 从 302 跳转的 URL 获取 authID
        self.authID = re.findall(r"auth_id=(.*)", loginASPX.url)[0]
        # 执行登陆后方法
        self.afterLogin()
        return self.session

    @loginRequired("SSE")
    def afterLogin(self) -> None:
        """登陆完成"""
        # 获取个人信息
        log.info("正在获取信息...")
        self.getProfile()
        log.info("[green]获取信息成功[/]", extra={"markup": True})

        # 若保持金币不变，设定金币下限
        if self.keepGold:
            self.limitGold = self.getGold()

        # 2021-09-01 前注册的账户一般不活跃
        if maya.when(self.getRegisterDate()) > maya.when("2021-09-01"):
            color, text = "red", "后"
        else:
            color, text = "green", "前"

        # 输出信息
        log.info(
            f"[bold {color}]账号于[/] [not bold]2021-09-01[/] [bold {color}]{text}注册[/]",
            extra={"markup": True},
        )
        log.info(
            f'{"[bold blue]" if self.ignoreExisted else "[bold red]不"}跳过[/]已存在题目',
            extra={"markup": True},
        )
        log.info(
            f'{"[bold blue]" if self.ignoreZero else "[bold red]不"}跳过[/]得分为零题目',
            extra={"markup": True},
        )
        log.info(f"限制金币数: {self.limitGold}")

    # 以下为获取信息相关方法

    @loginRequired("SSE")
    def getProfile(self) -> dict:
        """获取个人信息"""
        profileASPX = self.session.get(
            f"{self.baseURL}/train/profile.aspx", params={"auth_id": self.authID}
        )

        profile = pandas.read_html(profileASPX.text)[1]
        profile = profile.set_index(0)

        self.profile = dict(profile[1])
        return self.profile

    @loginRequired("SSE")
    def getRegisterDate(self, refresh=False) -> str:
        """获取注册时间"""
        if refresh:
            self.getProfile()
        return self.profile["注册时间"]

    # @Gold
    # 以下为金币相关方法

    @loginRequired("SSE")
    def getGold(self, refresh=False) -> int:
        """获取金币数量"""
        if refresh:
            self.getProfile()
        return int(self.profile["金币数"])

    @loginRequired("SSE")
    def totalGold(self) -> int:
        """总计支付金币数量"""
        howMuch = len(self.history()) * 10
        return howMuch

    @loginRequired("SSE")
    def neededGold(self) -> int:
        """总计所需金币数量"""
        howMuch = self.totalGold()
        gold = self.getGold(refresh=True)
        need = howMuch - gold
        log.info(f"需要 {need} 金币 | 应当支付 {howMuch} 金币 | 余额 {gold} 金币")
        return need

    @loginRequired("SSE")
    def viewGet(self, sessionID: str) -> str:
        viewASPX = self.session.get(
            f"{self.baseURL}/train/view.aspx",
            params={"session_id": sessionID, "auth_id": self.authID},
        )
        return viewASPX.text

    @loginRequired("SSE")
    def incGold(self, howMuch: int, sessionID: List[str]) -> None:
        """获取金币"""
        if howMuch < 1:
            log.info("无需获取金币")
            return
        # 没有给出 sessionID 列表，则使用全部历史记录即可
        elif sessionID is None:
            sessionID = self.history()

        with Progress(
            *Progress.get_default_columns(),
            "[blue]探寻 {task.completed}/{task.total} 题目[/]",
        ) as progress:
            task = progress.add_task("正在寻找金币", total=len(sessionID))
            for i, j in enumerate(sessionID):
                text = self.viewGet(j)
                # 检查重新评分按键是否在其中，注意一定要有双引号
                if '"重新评分"' in text:
                    progress.update(task, total=i)
                    break
                progress.update(task, advance=1)
            else:
                raise UnexpectedResultError("未找到金币")
        # Python 语法糖，i 的值会被保留
        sessionID = j
        html = HTML(text)

        # hidden 表单获取
        hidden = html.xpath('//input[@type="hidden"]')
        data = {i.get("name"): i.get("value") for i in hidden}
        data.update(
            {
                "ctl00$ContentPlaceHolder1$view1$print$Button2": "重新评分",
                "ctl00$ContentPlaceHolder1$view1$print$TextBox1": "",
            }
        )

        gold = self.getGold(refresh=True)

        with Progress(
            *Progress.get_default_columns(), "[blue]{task.fields[info]}[/]"
        ) as progress:
            task = progress.add_task(
                "正在获取金币", total=howMuch, info=f"余额 {gold}/{gold+howMuch} 金币"
            )
            for i in range(howMuch):
                viewASPX = self.session.post(
                    f"{self.baseURL}/train/view.aspx",
                    params={"session_id": sessionID, "auth_id": self.authID},
                    data=data,
                )
                if viewASPX.status_code not in {302, 200}:
                    raise SessionError(f"{sessionID} 出现错误 | 状态码 {viewASPX.status_code}")
                progress.update(
                    task, advance=1, info=f"余额 {gold+i+1}/{gold+howMuch} 金币"
                )

        realGold = self.getGold(refresh=True)
        if gold + howMuch != realGold:
            raise UnexpectedResultError(f"余额 {gold} 与实际余额 {realGold} 不符")

    # @Question
    # 以下为题目相关方法

    @loginRequired("SSE")
    def history(self, maxPage: int = None, refresh=False) -> List[str]:
        """查看做题历史"""

        # 非强制刷新、历史已获取且历史数量不变则直接返回
        if not refresh and self.sessionID and self.sessionID["maxPage"] == maxPage:
            return self.sessionID["sessionID"]
        self.sessionID = {"maxPage": maxPage}

        historyASPX = self.session.get(
            f"{self.baseURL}/train/history.aspx", params={"auth_id": self.authID}
        )
        html = HTML(historyASPX.text)

        if "暂无数据" in historyASPX.text:
            raise NoDataError("未查询到历史数据")

        lastPage = html.xpath('//a[contains(text(),"尾页")]')[0].get("href")
        totalPages = int(lastPage.split("'")[-2]) if maxPage is None else maxPage

        # hidden 表单获取
        hidden = html.xpath('//input[@type="hidden"]')
        data = {i.get("name"): i.get("value") for i in hidden}

        sessionID = []
        for i in track(range(1, totalPages + 1), description="正在获取题目"):
            data.update(
                {
                    "__EVENTTARGET": "ctl00$ContentPlaceHolder1$history1$AspNetPager1",
                    "__EVENTARGUMENT": i,
                }
            )

            historyASPX = self.session.post(
                f"{self.baseURL}/train/history.aspx",
                params={"auth_id": self.authID},
                data=data,
            )

            html = HTML(historyASPX.text)

            courses = html.xpath('//div[@class="courseShowFile1"]')
            for i in courses:
                score = i.xpath('.//span[@class="score"]')[0].text
                if not self.ignoreZero or score != "0":
                    ID = i.get("onclick").split("'")[-2]
                    sessionID.append(ID)

        self.sessionID.update({"sessionID": sessionID})
        return sessionID

    @loginRequired("SSE")
    def pickUpQuestion(self, tagID=0, level=0) -> str:
        """随机抽选题目"""
        pickUpQASPX = self.session.get(
            f"{self.baseURL}/train/action/pick-up-q.aspx",
            params={
                "auth_id": self.authID,
                "tag_id": tagID,
                "level": level,
            },
        )
        sessionID = pickUpQASPX.text.split(":")[-1]
        return sessionID

    @loginRequired("SSE")
    def submitQuestion(self, sessionID: str) -> None:
        """提交题目"""
        qASPX = self.session.get(
            f"{self.baseURL}/train/q.aspx",
            params={
                "auth_id": self.authID,
                "session_id": sessionID,
            },
        )
        html = HTML(qASPX.text)

        hidden = html.xpath('//input[@type="hidden"]')
        data = {i.get("name"): i.get("value") for i in hidden}
        data.update({"ctl00$ContentPlaceHolder1$q1$Button1": "Button", "editor1": ""})

        qASPX = self.session.post(
            f"{self.baseURL}/train/q.aspx",
            params={
                "auth_id": self.authID,
                "session_id": sessionID,
            },
            data=data,
        )

        scoreASPX = self.session.get(
            f"{self.baseURL}/train/action/score.aspx",
            params={
                "auth_id": self.authID,
                "session_id": sessionID,
            },
        )

        if scoreASPX.status_code != 200:
            log.error(f"得分获取错误，状态码为 {scoreASPX.status_code}")

        self.session.post(
            f"{self.baseURL}/train/action/post-rate.aspx",
            params={
                "auth_id": self.authID,
                "session_id": sessionID,
            },
            data={"rate": "1"},
        )

    # @Rank
    # 以下为获取排名相关方法

    @loginRequired("SSE")
    def crawlRank(self, maxPage=None) -> List[dict]:
        """获取排名"""
        rankASPX = self.session.get(
            f"{self.baseURL}/train/rank.aspx", params={"auth_id": self.authID}
        )
        html = HTML(rankASPX.text)

        lastPage = html.xpath('//a[contains(text(),"尾页")]')[0].get("href")
        totalPages = int(lastPage.split("'")[-2]) if maxPage is None else maxPage

        hidden = html.xpath('//input[@type="hidden"]')
        data = {i.get("name"): i.get("value") for i in hidden}

        rank = []
        for i in track(range(1, totalPages + 1), description="正在获取排名"):
            data.update(
                {
                    "__EVENTTARGET": "ctl00$ContentPlaceHolder1$rank1$AspNetPager1",
                    "__EVENTARGUMENT": i,
                }
            )
            rankASPX = self.session.post(
                f"{self.baseURL}/train/rank.aspx",
                params={"auth_id": self.authID},
                data=data,
            )
            table = pandas.read_html(rankASPX.text)[1]
            rank.extend(list(table.to_dict("index").values()))

        return rank

    # @Code
    # 以下为获取代码相关方法

    def getCode(self, sessionID: str) -> str | None:
        """获取代码"""
        # 获取代码是不需要 authID 的
        getCodeASPX = self.session.get(
            f"{self.baseURL}/train/action/get-code.aspx",
            params={"session_id": sessionID},
        )
        html = HTML(getCodeASPX.text)

        code = html.xpath("//pre")[0].text
        return code

    def saveCode(self, sessionID: str) -> str:
        """保存代码"""
        if not os.path.exists("codes"):
            os.mkdir("codes")

        viewASPX = self.session.get(
            f"{self.baseURL}/train/view.aspx",
            params={"auth_id": self.authID, "session_id": sessionID},
        )
        html = HTML(viewASPX.text)

        id = html.xpath('//div[@class="q"]/@id')[0]
        if self.ignoreExisted and os.path.exists(f"codes/{id}.c"):
            log.info(f"[yellow]{id}.c[/yellow] 已存在", extra={"markup": True})
            return "existed"
        else:
            log.info(f"正在下载 [blue]{id}.c[/]", extra={"markup": True})

        code = self.getCode(sessionID)

        if code is None:
            log.error(f"{id}.c 下载失败 | sessionID 为 {sessionID}")
            return "failed"
        elif "余额不足" in code:
            log.error("余额不足")
            return "insufficient"
        else:
            with open(f"codes/{id}.c", "w", encoding="utf-8_sig") as f:
                f.write(code)
            return "downloaded"

    @loginRequired("SSE")
    def crawlCodes(self, sessionID, howMany=None) -> None:
        """获取代码"""
        failed: int = 0
        existed: int = 0
        downloaded: int = 0
        gold: int = self.getGold(refresh=True)

        with Progress(
            *Progress.get_default_columns(),
            "[blue]获取 {task.completed}/{task.total} 代码[/]",
        ) as progress:
            task = progress.add_task("正在获取代码", total=len(sessionID[:howMany]))
            for i, j in enumerate(sessionID[:howMany]):
                if gold - 10 < self.limitGold:
                    realGold = self.getGold(refresh=True)
                    if gold != realGold:
                        log.warning(f"余额 {gold} 与实际余额 {realGold} 不符")
                        gold = realGold
                        log.info(f"重置余额为 {gold}")
                    else:
                        log.info(f"已达限制 {self.limitGold} 金币 | 余额 {realGold} 金币")
                        # progress.update(task, completed=i, total=i)
                        break

                result = self.saveCode(j)
                match result:
                    case "insufficient":
                        break
                    case "failed":
                        failed += 1
                    case "existed":
                        existed += 1
                    case "downloaded":
                        downloaded += 1
                        gold -= 10

                progress.update(task, advance=1)

        realGold = self.getGold(refresh=True)
        log.info(f"余额 {realGold} 金币")
        log.info(
            f"[green]新下载 {downloaded} 个代码[/] | "
            f"[yellow]已存在 {existed} 个代码[/] | "
            f"[red]失败 {failed} 个代码[/]",
            extra={"markup": True},
        )


if __name__ == "__main__":
    with open("config.json", encoding="utf-8") as f:
        config = json.load(f)
    trainer = Trainer(config["siteConfig"])
    trainer.login(config["username"], config["password"])
    # 方法一：爬取历史题目
    trainer.neededGold()
    gold = trainer.getGold()
    n = int(Prompt.ask("需要增加多少金币", default="0"))
    trainer.incGold(n, trainer.history())
    trainer.crawlCodes(trainer.history())
    log.info(f"正在自动消耗金币...")
    trainer.limitGold = gold
    trainer.ignoreExisted = False
    trainer.crawlCodes(trainer.history())
    # # 方法二：爬取新题目
    # sid = trainer.pickUpQuestion()
    # trainer.submitQuestion(sid)
    # trainer.saveCode(sid)
    # # 方法三：消耗金币术（新题目）
    # # 此方法不能忽略已存在
    # trainer.ignoreExisted = False
    # log.info(f'余额 {trainer.getGold()} 金币')
    # n = int(Prompt.ask('需要消耗多少金币'))
    # for i in range(n//10+1):
    #     sid = trainer.pickUpQuestion()
    #     trainer.submitQuestion(sid)
    #     trainer.saveCode(sid)
    # log.info(f'余额 {trainer.getGold(refresh=True)} 金币')
    # 方法四：消耗金币术（历史题目）
    # trainer.ignoreExisted = False
    # log.info(f"余额 {trainer.getGold()} 金币")
    # n = int(Prompt.ask("需要消耗多少金币"))
    # trainer.crawlCodes(trainer.history(), howMany=n // 10)
    # log.info(f"余额 {trainer.getGold(refresh=True)} 金币")
    # # 方法五：获取排名
    # rank = trainer.crawlRank()
    # with open("rank.json", "w", encoding="utf-8_sig") as f:
    #     json.dump(rank, f, ensure_ascii=False)
