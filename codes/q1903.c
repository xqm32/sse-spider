#include <stdio.h>
#include <math.h>
main()
{	   	  	  
    float x;
    printf("Please input x:\n");
    scanf("%f", &x);                  //1
    if (x < 0)
    {	   	  	  
        printf("y = %.2f\n", 3 * x - 1); //1
    }
    else if (x >= 10)
    {	   	  	  
        printf("y = %.2f\n", x);       //1
    }
    else if (x >= 0 && x < 10)
    {	   	  	  
        printf("y = %.2f\n", exp(x));     //1
    }
}	   	  	  