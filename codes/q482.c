﻿#include <stdio.h>

int main()
{	   	   
    int year;

    printf("输入年份:");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0)
            || year % 400 == 0)
        printf("%d是闰年!\n", year);
    else
        printf("%d不是闰年!\n", year);

    return 0;
}	   	   