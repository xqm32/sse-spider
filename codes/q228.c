#include  <math.h>
#include <stdio.h>
main()
{		 		   
    int	n = 1, count = 1;
    double	e = 1.0, term = 1.0;
    long	fac = 1;
    for (n = 1; fabs(term) >= 1e-5; n++)
    {		 		   
        fac = fac * n;
        term = 1.0 / fac;    /* 计算累加项 */
        e = e + term;	      /* 累加 */
        count++;               /* 记录累加的项数 */
    }
    printf("e = %f, count = %d\n", e, count);
}		 		   

