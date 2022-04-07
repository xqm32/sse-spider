#include <math.h>
#include <stdio.h>

main()
{	   	  	 	 
    int m, k = 0;
    for (m = 1; m <= 100; m++)
        if (fun(m) == 1)
        {	   	  	 	 
            printf("%4d", m);
            k++;
            if (k % 5 == 0)
                printf("\n");
        }
}	   	  	 	 

int fun(int n)
{	   	  	 	 
    int i, k = 1;
    if (n <= 1) k = 0;
    for (i = 2; i <= sqrt(n); i++)
        if (n % i == 0) k = 0;
    return k;
}	   	  	 	 
