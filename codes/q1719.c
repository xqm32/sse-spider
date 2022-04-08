#include <stdio.h>
#include <math.h>
int IsPrime(int x);
int main()
{	         	  
    int m, n, sum = 0; //1
    printf("Input n:"); //1
    scanf("%d", &n);//1
    for (m = 1; m <= n; m++) //1
    {	         	  
        if (IsPrime(m))   /* 素数判定 */
        {	         	  
            sum += m; //1
        }
    }
    printf("sum = %d\n", sum); //1
    return 0;
}	         	  
/* 函数功能：判断x是否是素数，若函数返回0，则表示不是素数，若返回1，则代表是素数 */
int IsPrime(int x)
{	         	  
    int i, flag = 1; //1
    int squareRoot = (int)sqrt(x); //1
    if (x <= 1)   flag = 0;     /* 负数、0和1都不是素数 */
    for (i = 2; i <= squareRoot && flag; i++) //1
    {	         	  
        if (x % i == 0) flag = 0; /* 若能被整除，则不是素数 */
    }
    return flag;
}	         	  