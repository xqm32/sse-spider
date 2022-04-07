#include <stdio.h>

int main()
{	   	       	  
    int n;

    for (n = 900; n < 1000; n++)
    {	   	       	  
        if (n % 5 == 2 && n % 7 == 3
                && n % 3 == 1)
        {	   	       	  
            printf("there are %d students in the ground\n", n);
        }
    }
}	   	       	  