#include <stdio.h>
#include <math.h>
main()
{	   	   	     
    double x, eps, s, y = 0, y0, t;
    int n, j;
    printf("Enter x & eps:");
    scanf ("%lf%lf", &x, &eps);
    n = 0;
    t = j = 1;
    s = x;
    do
    {	   	   	     
        y0 = y;
        if (n % 2 == 0) y = y + s / t;
        else       y = y - s / t;
        s *= x * x;
        t *= (j + 1) * (j + 2);
        j += 2;
        n++;
    }
    while (fabs(y0 - y) >= eps);
    printf("sin(%f)=%f\n", x, sin(x));
    printf("%d,sin(%f)=%f\n", n, x, y);
}	   	   	     