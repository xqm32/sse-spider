#include "math.h"
#include <stdio.h>
main()
{	   	   	   
    int s;
    double n, t, pi;
    t = 1;
    pi = 0;
    n = 1;
    s = -1;
    do
    {	   	   	   
        s = -s;
        t = s / n;
        pi += t;
        n += 2;
    }while ((fabs(t)) >= 1e-4);
    pi = pi * 4;
    printf("pi=%10.6f\n", pi);
}	   	   	   