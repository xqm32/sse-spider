#include<stdio.h>
#include<math.h>
int IsPrime(int x);
int main()
{	    	
    int i, j, k, t, m, n, count = 0;
    printf("Input n:\n");
    scanf("%d", &n);
    for (m = 10; m < n; m++)  // 从10开始试到n-1
    {	    	
        i = m / 100;			      // 分离出百位数字
        j = (m - i * 100) / 10;	 // 分离出十位数字
        k = m % 10;	               // 分离出个位数字
        if (m < 100)               // 若为两位数
        {	    	
            t = k * 10 + j ;       //右读结果
        }
        else                         // 若为三位数
        {	    	
            t = k * 100 + j * 10 + i; //右读结果
        }
        if (m == t && IsPrime(m))
        {	    	
            printf("%4d", m);
            count++;
        }
    }
    printf("\ncount=%d\n", count);
    return 0;
}	    	
// 函数功能：判断x是否是素数，若函数返回0，则表示不是素数，若返回1，则代表是素数
int IsPrime(int x)
{	    	
    int i, flag = 1;
    int squareRoot = (int)sqrt(x);
    if (x <= 1)   flag = 0;     // 负数、0和1都不是素数
    for (i = 2; i <= squareRoot && flag; i++)
    {	    	
        if (x % i == 0) flag = 0; // 若能被整除，则不是素数
    }
    return flag;
}	    	