﻿#include <stdio.h>
#include <math.h>
int main()
{	      	     
    int  m, n;
    for (m = 0; m < 10; m++)
    {	      	     
        printf("%7d", m);			//输出表头
    }
    printf("\n");
    for (n = 0; n < 10; n++)			//乘数n从1变化到9
    {	      	     
        printf("%d", n);			//输出每行的开头数字
        for (m = 0; m < 10; m++)		//被乘数m从1变化到9
        {	      	     
            printf("%7.3f", sqrt(n * 10 + m));
        }							//输出第m行n列中的值
        printf("\n");				//输出换行符,准备输出下一行
    }
    return 0;
}	      	     