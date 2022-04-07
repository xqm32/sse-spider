#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{	   	 	 	       
    char str[101] = {'\0'};
    char *p1, *p2;

    printf("请输入一个字符串，长度小于等于100：");
    scanf("%s", str);

    p1 = (char *)(str + strlen(str));
    p2 = (char *)str;

    printf("该字符串的内存编码为： ");
    while (p1 > p2)
    {	   	 	 	       
        printf("%x ", (unsigned char)*p2 & 0xff);
        p2++;
    }

    return 0;
}	   	 	 	       


