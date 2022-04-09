#include <stdio.h>
#include <math.h>
int IsPerfect(int x);
void OutputFactor(int m);
int main()
{	   	   
    int m;
    printf("Input m:\n");
    scanf("%d", &m);
    if (IsPerfect(m))  //若m是完全数
    {	   	   
        printf("Yes!\n");
        OutputFactor(m);
    }
    else                 //若m不是完全数
    {	   	   
        printf("No!\n");
    }
    return 0;
}	   	   
// 函数功能：判断完全数，若函数返回0，则代表不是完全数，若返回1，则代表是完全数
int IsPerfect(int x)
{	   	   
    int i;
    int sum = 0;  //x为1时，sum=0，函数将返回0，表示1没有真因子，不是完全数
    for (i = 1; i < x; i++)
    {	   	   
        if (x % i == 0)
        {	   	   
            sum = sum + i;
        }
    }
    return sum == x ? 1 : 0;
}	   	   
// 函数功能：输出x的所有包括1在内的因子
void OutputFactor(int m)
{	   	   
    int i, isFirstFactor = 1;
    for (i = 1; i < fabs(m); i++) //输出包括1在内的因子，所以从1开始
    {	   	   
        if (m % i == 0)
        {	   	   
            if (isFirstFactor == 0)     printf(",");
            printf("%d", i);
            isFirstFactor = 0;
        }
    }
    printf("\n");
}	   	   