#include <stdio.h>
int main()
{	    	  	   
    int m;
    for (m = 1; m <= 99; m++)
    {	    	  	   
        if (m * m % 10 == m || m * m % 100 == m)
        {	    	  	   
            printf("m=%3d\t\tm*m=%6d\n", m, m * m);
        }
    }
    return 0;
}	    	  	   