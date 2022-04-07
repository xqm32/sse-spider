#include <stdio.h>

int main()
{	   	 	  	 
    int k;
    int sum;

    k = 1;
    sum = 0;

    while (k <= 100)
    {	   	 	  	 
        if (k % 3 == 0 && k % 7 != 0)
            sum = sum + k;
        k++;
    }

    printf("sum=%d\n", sum);

    return 0;
}	   	 	  	 