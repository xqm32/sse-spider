#include <stdio.h>
#include <math.h>
int main()
{	    	 	 
    long c, d, i, j, f = 0;
    int t, n = 0;

    printf("please input c,d(c>2):\n");
    scanf("%ld,%ld", &c, &d);
    if (c % 2 == 0)
        c++;
    for (i = c; i <= d; i += 2)
    {	    	 	 
        for (t = 0, j = 3; j <= sqrt(i); j += 2)
        {	    	 	 
            if (i % j == 0)
            {	    	 	 
                t = 1;
                break;
            }
        }

        if (t == 0)
        {	    	 	 
            if (i - f == 2)
            {	    	 	 
                printf("(%ld,%ld)\n", f, i);
                n++;
            }

            f = i;
        }
    }
    printf("total=%d\n", n);
    return 0;
}	    	 	 