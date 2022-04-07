#include <stdio.h>
main()
{	   	 	  	 	 
    int i, j, n;
    long term, sum = 0;                /* 累加求和变量sum初始化为0 */
    printf("Input n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {	   	 	  	 	 
        term = 1;                        /* 累乘求积变量term赋初值为1 */
        for (j = 1; j <= i; j++)
        {	   	 	  	 	 
            term = term * j;           /* 累乘求积 */
        }
        sum = sum + term;               /* 累加求和 */
    }
    printf("1!+2!+…+%d! = %ld\n", n, sum);
}	   	 	  	 	 

