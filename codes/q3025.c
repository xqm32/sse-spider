#include <stdio.h>
int main()
{	  		    	 
    int i = 200, n = 0;
    while ((i <= 300) && (i >= 200))
    {	  		    	 
        if (i % 7 != 0)
        {	  		    	 
            i++;
            continue;
        }
        printf("%5d", i);
        n = n + 1;
        if (n == 5)
        {	  		    	 
            printf("\n");
            n = 0;
        }
        i++;
    }
}	  		    	 