﻿#include <stdio.h>
main()
{	 	   	 	  
    long i, sum = 0;
    for (i = 1; ; i++) //1
    {	 	   	 	  
        sum = sum + i * i * i; //1
        if (sum >= 1000000)	break;
    }
    printf("count = %d\n", i);//1
}	 	   	 	  