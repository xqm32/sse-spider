﻿#include <stdio.h>
#include <string.h>

#define N 6
#define N1 20

int main()
{	   	 	 	    	
    char str[N1], min[N1], max[N1];
    int i;

    printf("请输入6行字符串：\n");
    gets(min);  //假设第1个串最小

    strcpy(max, min);//假设最大串的值也为min

    //循环输入其它串，并与最小的串及最大的串比较
    for (i = 2; i <= N; i++)
    {	   	 	 	    	
        gets(str);
        if (strcmp(str, min) < 0)
            strcpy(min, str);
        if (strcmp(str, max) > 0)
            strcpy(max, str);
    }

    printf("The max string is: %s\n", max);
    printf("The min string is: %s\n", min);

    return 0;
}	   	 	 	    	