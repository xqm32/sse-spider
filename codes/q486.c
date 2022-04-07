#include <stdio.h>

int main()
{	   	 	  		  
    int k;
    float sum;

    k = 1;
    sum = 0;

    while (k <= 100)
    {	   	 	  		  
        sum = sum + 1.0 / k;
        k++;
    }

    printf("sum=%f\n", sum);

    return 0;
}	   	 	  		  