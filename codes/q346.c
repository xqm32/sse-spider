﻿#include <stdio.h>
main()
{	    		   
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if(b) printf("%d\n",a/b);
    else printf("cannot divide by zero.\n");
}	    		   
