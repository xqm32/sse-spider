#include <stdio.h>
int main()
{	       	    	 
    int i, j, k;
    for (i = 0; i <= 3; i++)//4
    {	       	    	 
        for (j = 0; j <= 3; j++)//4
        {	       	    	 
            for (k = 0; k <= 6; k++)//4
            {	       	    	 
                if (i + j + k == 8)//4
                {	       	    	 
                    printf("i=%d, j=%d, k=%d\n", i, j, k);//2
                }
            }
        }
    }
    return 0;
}	       	    	 