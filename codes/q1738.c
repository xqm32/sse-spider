#include <stdio.h>

main()
{	      		  
    int i, j, k;
    for (i = 1; i <= 4; i++)		//i控制行数
    {	      		  
        for (j = 1; j <= 4 - i; j++)	// 随着行数的增加，输出递减数目的空格
        {	      		  
            printf(" ");
        }
        for (k = 1; k <= 6; k++)	//每行输出6个*字符
        {	      		  
            printf("*");
        }
        printf("\n");			//将光标移到下一行起始位置处
    }
}	      		  