#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int fun(char *p)
{	   	 	   	 	 
    int n;
    n = *p - '0';
    p++;
    while (*p != 0)
    {	   	 	   	 	 
        n = n * 8 + *p - '0';
        p++;
    }
    return n;
}	   	 	   	 	 
main()
{	   	 	   	 	 
    char s[6];
    int i;
    int n;
    printf("输入一个八进制字符串（5位）:");
    gets(s);
    if (strlen(s) > 5)
    {	   	 	   	 	 
        printf("错误：字符串太长\n\n");
        exit(0);
    }
    for (i = 0; s[i]; i++)
    {	   	 	   	 	 
        if (s[i] < '0' || s[i] > '7')
        {	   	 	   	 	 
            printf("错误:%c 不是一个八进制字符\n\n", s[i]);
            exit(0);
        }
    }
    printf("输入的八进制字符串为");
    puts(s);
    n = fun(s);
    printf("\n%s 转换成十进制整数为：%d\n", s, n);
}	   	 	   	 	 




