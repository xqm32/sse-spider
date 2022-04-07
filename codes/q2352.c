#include <stdio.h>
main()
{	 	     
    char str[100];
    char *p=&str[0];
    int sum1=0,sum2=0;
    printf("input the string：\n");
    scanf("%s",p);
    while(*p!='\0')
    {	 	     
        if(*p>=48&&*p<=57)
        sum1++;
        else if(*p>='e'&&*p<='k')
        sum2++;
        p++;
    }
    printf("the amount of the letters between e and k:%d\n",sum2);
    printf("the amount of the figure:%d\n",sum1);
}	 	     