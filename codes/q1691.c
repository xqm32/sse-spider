#include  <math.h>
#include  <stdio.h>
main()
{	        	 	
    float  a, b, c, disc, p, q, t1,t2;
    printf("Please enter the coefficients a,b,c:"); //1
    scanf("%f,%f,%f", &a, &b, &c); /* 要求输入保证方程有两不等实根 */
    disc = b * b - 4 * a * c;      	/* 计算判别式 */
    p = - b / (2 * a); //1
    q = sqrt(disc) / (2 * a); //1
    t1 = p+q; //1
    t2 = p-q; //1
    printf("x1=%7.4f, x2=%7.4f\n", t1<t2?t1:t2,  t1<t2?t2:t1);//1
}	        	 	