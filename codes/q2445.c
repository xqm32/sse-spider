#include <stdio.h>
#include <string.h>

void reverse(char *s)
{	 	   	 
    char *t = s + strlen(s) - 1;
    char temp;

    while (s <= t)
    {	 	   	 
        temp = *t;
        *t = *s;
        *s = temp;
        s++;
        t--;
    }
}	 	   	 

int main()
{	 	   	 
    char str[100];

    printf("请输入一个字符串：");
    gets(str);

    reverse(str);
    printf("该字符串逆反后为%s！\n", str);
}	 	   	 