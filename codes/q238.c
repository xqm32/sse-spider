#include <stdio.h>
unsigned long  Fact(unsigned int  n);
int main()
{		   	 	 
    unsigned int  i, n;
    unsigned long sum = 0;
    printf("Input n(n>0):");
    scanf("%u", &n);
    for (i = 1; i <= n; i++)
    {		   	 	 
        sum = sum + Fact(i);
    }
    printf("sum = %lu\n", sum);
    return 0;
}		   	 	 
/* 函数功能：用迭代法计算无符号整型变量n的阶乘 */
unsigned long  Fact(unsigned int  n)
{		   	 	 
    unsigned int  i;
    unsigned long result = 1;
    for (i = 2; i <= n; i++)
        result *= i;
    return result;
}		   	 	 

