#include <stdio.h>
#include <stdlib.h>

int main()
{	 	   	 	  
    int j;
    long n;
    printf("Please input number:");
    scanf("%ld", &n);
    for (j = 999; j >= 100; j--)
    {	 	   	 	  
        if (n % j == 0)
        {	 	   	 	  
            printf("The max factor with 3 digits in %ld is: %d.\n", n, j);
            break;
        }
    }
    return 0;
}	 	   	 	  