#include <stdio.h>

int alphabetic(char c)
{	      	 
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {	      	 
        return 1;
    }
    else
    {	      	 
        return 0;
    }
}	      	 

/* 寻找最长单词 */
int longest(char string[])
{	      	 
    int len = 0, i, length = 0, flag = 1, place, point;

    for (i = 0; i <= strlen(string); i++)
    {	      	 
        if (alphabetic(string[i]))
        {	      	 
            if (flag)
            {	      	 
                point = i;
                flag = 0;
            }
            else
            {	      	 
                len++;
            }
        }
        else
        {	      	 
            flag = 1;
            if (len > length)
            {	      	 
                length = len;
                place = point;
                len = 0;
            }
        }
    }
    return place;
}	      	 

int main()
{	      	 
    int i;
    char line[100];

    printf("输入一行文本：\n");
    gets(line);
    printf("\n最长的单词是：");
    for (i = longest(line); alphabetic(line[i]); i++)
    {	      	 
        printf("%c", line[i]);
    }
    printf("\n");

    return 0;
}	      	 