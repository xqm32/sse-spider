#include<stdio.h>
#include<math.h>
int IsPrime(double x);
int main()
{	  	  
    double  t, m;
    int     count = 0, i, n;
    printf("Input n:\n");
    scanf("%d", &n);
    t = 2;
    for (i = 2; i <= n; i++)
    {	  	  
        t = t * 2;
        m  = t - 1;
        if (IsPrime(m))
        {	  	  
            count++;
            printf("2^%d-1=%.0lf\n", i, m);
        }
    }
    printf("count=%d\n", count);
    return 0;
}	  	  
// 函数功能：判断x是否是素数，若函数返回0，则表示不是素数，若返回1，则代表是素数
int IsPrime(double x)
{	  	  
    int i, flag = 1;
    int squareRoot = (int)sqrt(x);
    if (x <= 1)   flag = 0;     // 负数、0和1都不是素数
    for (i = 2; i <= squareRoot && flag; i++)
    {	  	  
        if (x / i == (long long)(x / i)) flag = 0; // 若能被整除，则不是素数
    }
    return flag;
}	  	  