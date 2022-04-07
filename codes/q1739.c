#include <stdio.h>

main()
{	      	 
    int  i , j , k;
    for (i = 1; i <= 4; i++)              //控制行数
    {	      	 
        for (k = 1; k <= (2 * i - 1); k++) 	//控制每行输出的*号个数
        {	      	 
            printf("*");
        }
        printf("\n");                     	//输出一行后换行
    }
}	      	 