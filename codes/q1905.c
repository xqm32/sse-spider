#include <stdio.h>
int main()
{	     	 	  
    float x, y;

    printf("Please input x:\n");
    scanf("%f", &x);

    if (x < 1)         //2
    {	     	 	  
        y = x;
    }
    else if (x < 10)   //2
    {	     	 	  
        y = -1 / x - 1;
    }
    else               //2
    {	     	 	  
        y = 5 * x - 11;
    }

    printf("y=%.2f\n", y);
    return 0;
}	     	 	  