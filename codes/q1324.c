﻿#include <stdio.h>

void convert(int n)
{	    		 		 
    int i;

    if ((i = n / 10) != 0)
    {	    		 		 
        convert(i);
    }
    putchar(n % 10 + '0');
}	    		 		 

int main()
{	    		 		 
    int number;

    printf("\n输入整数：");
    scanf("%d", &number);
    printf("\n输出是：");
    if (number < 0)
    {	    		 		 
        putchar('-');
        number = -number;
    }
    convert(number);

    return 0;
}	    		 		 