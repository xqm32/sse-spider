#include <stdio.h>
#include <math.h>
int FactorSum(int x);
int main()
{	   	  
    int  n, m, k, i;
    printf("Input n:\n");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {	   	  
        m = FactorSum(i);//计算i的所有因子之和
        k = FactorSum(m); //计算m的所有因子之和
        if (i == k && i < m) //若m和i是亲密数
        {	   	  
            printf("(%d,%d)\n", i, m);
        }
    }
    return 0;
}	   	  
// 函数功能：返回x的所有因子之和
int FactorSum(int x)
{	   	  
    int i;
    int sum = 0;
    for (i = 1; i < x; i++)
    {	   	  
        if (x % i == 0)
        {	   	  
            sum = sum + i;
        }
    }
    return sum;
}	   	  