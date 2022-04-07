#include <stdio.h>

void getString(char *str, int min, int max)
{	   	 	 	     	 
    int len;

    printf("请输入一个字符串(长度为[%d..%d]个字符)：\n", min, max);
    scanf("%s", str);
    len = strlen(str);

    while (len < min || len > max)
    {	   	 	 	     	 
        printf("请输入一个字符串(长度为[%d..%d]个字符)：\n", min, max);
        scanf("%s", str);
        len = strlen(str);
    }
}	   	 	 	     	 

int main(int argc, char *argv[])
{	   	 	 	     	 
    char string[100];

    getString(string, 3, 5);

    printf("你输入的字符串为：%s\n", string);

    return 0;
}	   	 	 	     	 

