﻿#include  <stdio.h>
main()
{	   	 	 	 	 
    const double pi = 3.14159;
    double r;
    double circum;
    double area;
    printf("Input r:");
    scanf("%lf", &r);
    circum = 2 * pi * r;
    area = pi * r * r;
    printf("printf WITHOUT width or precision specifications:\n");
    printf("circumference = %f, area = %f\n", circum, area);
    printf("printf WITH width and precision specifications:\n");
    printf("circumference = %7.2f, area = %7.2f\n", circum, area);
}	   	 	 	 	 

