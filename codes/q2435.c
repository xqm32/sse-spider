#include <stdio.h>
#include <string.h>

int main()
{	 	     	 
    char name[256];     //一行最大长度
    int nwords;         //单词总数
    int total_length;   //单词总长度
    char *p = name;
    int in;             //是否在单词内 1：是 0：否
    int len;            //某个单词的长度计数

    printf("请输入一行字符：");
    gets(name);

    len = 0;
    nwords = 0;
    total_length = 0;
    in = 0;
    while (*p != '\0')
    {	 	     	 

        if (*p == ' ')
        {	 	     	 
            in = 0;     //遇到空格则在单词外
            total_length = total_length + len;
            len = 0;
        }
        else
        {	 	     	 
            if (!in)    //读到一个非空格，由单词外状态转入单词内状态
            {	 	     	 
                in = 1;
                nwords++;
            }
            len++;
        }
        p++;
    }
    total_length = total_length + len; //处理最后一个单词

    printf("总共有%d个单词，平均长度为%d\n", nwords, total_length / nwords);

    return 0;
}	 	     	 