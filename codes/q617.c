﻿#include "stdio.h"

float peven(int n)
{	   	  	  	  
    float s;
    int i;
    s = 0;
    for (i = 2; i <= n; i += 2)
        s += 1 / (float)i;
    return(s);
}	   	  	  	  

float podd(int n)
{	   	  	  	  
    float s;
    int i;
    s = 0;
    for (i = 1; i <= n; i += 2)
        s += 1 / (float)i;
    return(s);
}	   	  	  	  

float dcall(float (*fp)(), int n)
{	   	  	  	  
    float s;
    s = (*fp)(n);
    return(s);
}	   	  	  	  

main()
{	   	  	  	  
    float sum;
    int n;
    while (1)
    {	   	  	  	  
        scanf("%d", &n);
        if (n > 1)
            break;
    }
    if (n % 2 == 0)
    {	   	  	  	  
        printf("Even=");
        sum = dcall(peven, n);
    }
    else
    {	   	  	  	  
        printf("Odd=");
        sum = dcall(podd, n);
    }
    printf("%f", sum);
}	   	  	  	  