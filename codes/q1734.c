#include  <stdio.h>

main()
{	       
    int  m, n;
    for (m = 1; m < 10; m++)               //外层循环控制被乘数m从1变化到9
    {	       
        for (n = 1; n <= m; n++)           //内层循环控制乘数n从1变化到m
        {	       
            printf("%4d", m * n);          //输出第m行n列的表值
        }
        printf("\n");                      //控制输出换行，准备打印下一行
    }
}	       