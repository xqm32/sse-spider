#include <stdio.h>

main()
{	      	  	 
    int  i , j, k ;
    for (i = 1; i <= 4; i++)		// 控制行数
    {	      	  	 
        for (j = 1; j <= 8 - i; j++)	// 随着行数的增加，输出递减数目的空格
        {	      	  	 
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++)
        {	      	  	 
            printf("*");
        }
        printf("\n");
    }
}	      	  	 