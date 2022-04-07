#include <stdio.h>
main()
{		   	 	   
    float x;
    printf("Input a float number:");
    scanf("%f", &x);
    if (x < 0) x = -x;
    printf("Absolute value of x is %f\n", x);
}		   	 	   

