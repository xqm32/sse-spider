#include  <math.h>
#include  <stdio.h>
main()
{	         	
    int  m, i;
    int  flag = 1;               //置标志变量flag初值为真（1）
    printf("Please enter a number:");
    scanf("%d", &m);
    if (m <= 1)                  //负数,0和1都不是素数
    {	         	
        flag = 0;                //将标志变量flag置为假（0）
        if (1 == m || -1 == m || 0 == m)
        {	         	
            printf("It is not a prime number.No divisor!\n");
        }
        m = (int)fabs(m);       //对m取绝对值，以便对负数输出因子但不输出正负号
    }
    for (i = 2; i <= m - 1; i++)
    {	         	
        if (m % i == 0)          //若m能被i整除，表明i是m的一个因子
        {	         	
            flag = 0;             //则将标志变量flag置为假（0）
            printf("%d\n", i);  //输出m的因子i
        }
    }
    if (flag)   //若标志变量flag为真，则表明全部检验完毕，未发现能整除m的数
    {	         	
        printf("It is a prime number.No divisor!\n");//m是素数，没有因子
    }
}	         	