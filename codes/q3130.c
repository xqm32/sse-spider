#include <stdio.h>
#include <math.h>
int main()
{		 	 	 	       
    float x0, x1, x2, fx0, fx1, fx2;
    do
    {		 	 	 	       
        scanf("%f,%f", &x1, &x2);
        fx1 = x1 * x1 * x1 - x1 - 1;
        fx2 = x2 * x2 * x2 - x2 - 1;
    }
    while (fx1 * fx2 > 0);
    do
    {		 	 	 	       
        x0 = (x1 + x2) / 2;
        fx0 = x0 * x0 * x0 - x0 - 1;
        if ((fx0 * fx1) < 0)
        {		 	 	 	       
            x2 = x0;
        }
        else
        {		 	 	 	       
            x1 = x0;
        }
    }
    while (fabs((double)fx0) >= 1e-6);
    printf("x=%6.2f\n", x0);
    return 0;
}		 	 	 	       