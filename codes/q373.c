#include <stdio.h>
int a[9];
int main()
{	    			 	 	 
    int m, count = 0;
    for (m = 123; m <= 333; m++)
        if (ok(m, a) && ok(2 * m, a + 3) && ok(3 * m, a + 6))
            printf("No.%d: %d %d %d\n", ++count, m, 2 * m, 3 * m);
    return 0;
}	    			 	 	 
int ok(int t, int *z)
{	    			 	 	 
    int *p1, *p2;
    for (p1 = z; p1 < z + 3; p1++)
    {	    			 	 	 
        *p1 = t % 10;
        t /= 10;
        for (p2 = a; p2 < p1; p2++)
            if (*p1 == 0 || *p2 == *p1)
                return 0;
    }
    return 1;
}	    			 	 	 