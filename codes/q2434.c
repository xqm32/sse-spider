#include <stdio.h>

int main()
{	 	    
    char name[100];
    char *p = name;

    printf("请输入你的姓名：");
    scanf("%s", name);

    while (*p != '\0')
    {	 	    
        putchar(*p);
        putchar(' ');
        p++;
    }

    return 0;
}	 	    