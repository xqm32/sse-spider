#include <stdio.h>
#include <math.h>
int main()
{	        	 	 
    int i, m;
    double s, n;
    printf("Input n:\n");
    scanf("%lf", &n);
    for (m = 1; m <= 10000; m++)
    {	        	 	 
        s = 0;
        for (i = m; i <= 2 * m; i++)
        {	        	 	 
            s = s + sqrt(i);
        }

        if (s > n)
        {	        	 	 
            break;
        }
    }
    printf("Result:m>=%d\n", m);
    printf("s=%.2lf\n", s);
    return 0;
}	        	 	 