#include<stdio.h>
int main()
{	   	  	     
    int a, b, n;
    for (a = 1; a <= 9; a++)
    {	   	  	     
        for (b = 1; b <= 9; b++)
        {	   	  	     
            for (n = 1; n <= 100; n++)
            {	   	  	     
                if (1000 * a + 100 * a + 10 * b + b == n * n)
                    printf("The number is:%d\n", n * n);
            }
        }
    }
    return 0;
}	   	  	     

