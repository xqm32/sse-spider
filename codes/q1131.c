﻿#include <stdio.h>

unsigned long fun(int n);

main()
{	     	
    int n;
    unsigned long  sum = 0;
    printf("Input n:");
    scanf("%d", &n);
    while (n)
    {	     	
        sum = fun(n--);
    }
    printf("The sum is :%u", sum);
}	     	

unsigned long fun(int n)
{	     	
    static unsigned long  m_sum = 0;
    m_sum += n;
    return m_sum;
}	     	

