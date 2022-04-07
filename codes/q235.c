#include <stdio.h>
int Max(int a, int b);
int main()
{		       
    int a, b;
    printf("Input a,b:");
    scanf("%d,%d", &a, &b);
    printf("max = %d\n", Max(a, b));
    return 0;
}		       
/* 函数功能：计算a和b的最大值 */
int Max(int a, int b)
{		       
    return a > b ? a : b;
}		       

