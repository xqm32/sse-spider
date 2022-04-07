#include <stdio.h>
#include <math.h>
main()
{	    	  		 
    int m, i, flag;

    for (m = 100; m <= 200; m++)
    {	    	  		 
        flag = 1;
        for (i = 2; i < m && flag; i++)
        {	    	  		 
            if (m % i == 0)
                flag = 0;
        }
        if (flag)
        {	    	  		 
            printf("%d ", m);
        }
    }
}	    	  		 