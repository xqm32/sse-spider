﻿#include <stdio.h>
main()
{	   	 	 	      
    int  i, n, sum;
    printf("Input n:");
    scanf("%d", &n);
    sum = 0;                     /* 累加求和变量初始化为0 */
    i = 1;
    do
    {	   	 	 	      
        sum = sum + i;          /* 做累加运算 */
        i++;	/* 累加计数器加1 */
    }
    while (i <= n);
    printf("sum = %d\n", sum);
}	   	 	 	      

