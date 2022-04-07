#include  <math.h>
#include  <stdio.h>
main()
{	        	   
    float  a, b, c, disc, p, q;
    printf("Please enter the coefficients a,b,c:\n");
    scanf("%f,%f,%f", &a, &b, &c); /* 要求输入保证方程有两不等实根 */
    disc = b * b - 4 * a * c; /* 计算判别式 */

    if (disc < 0)
        printf("error!\n");
    else
    {	        	   
        p = - b / (2 * a);
        q = sqrt(disc) / (2 * a);
        printf("x1=%7.4f, x2=%7.4f\n", p + q, p - q);
    }
}	        	   