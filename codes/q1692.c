﻿#include  <stdio.h>
main()
{	        		   
    int  year, flag;
    printf("Input a year:");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) //1
        flag = 1;                 /* 如果year是闰年，则标志变量flag置1 */
    else
        flag = 0;                 /* 否则，标志变量flag置0 */
    if (flag)
        printf("%d is a leap year!\n", year);     /* 打印“是闰年”*/
    else
        printf("%d is not a leap year!\n", year); /* 打印“不是闰年”*/
}	        		   