#include <stdio.h>
long Fib(int a);
int main()
{	   	 	   	  	
    int n, i, x;
    printf("Input n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {	   	 	   	  	
        x = Fib(i);    /* 调用递归函数Fib()计算Fibonacci数列的第n项 */
        printf("Fib(%d)=%d\n", i, x);
    }
    return 0;
}	   	 	   	  	
/* 函数功能：用递归法计算Fibonacci数列中的第n项的值 */
long Fib(int n)
{	   	 	   	  	
    long f;
    if (n == 0)   f = 0;              /* 基线情况 */
    else if (n == 1)   f = 1;        /* 基线情况 */
    else   f = Fib(n - 1) + Fib(n - 2); /* 一般情况 */
    return f;
}	   	 	   	  	

