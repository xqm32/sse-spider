#include <stdio.h>

int main(void)
{	 	 	   	
    int i, j;
    int a[3][2];                  /* 定义1个二维数组a */

    /* 给二维数组赋值 */
    for (i = 0; i < 3; i++)       /* 行下标是外循环的循环变量 */
        for (j = 0; j < 2; j++)   /* 列下标是内循环的循环变量 */
            a[i][j] = i + j;      /* 给数组元素赋值 */

    /* 按矩阵的形式输出a */
    for (i = 0; i < 3; i++)     	 /* 针对所有行的循环 */
    {	 	 	   	
        for (j = 0; j < 2; j++)   /* 输出第i行的所有元素 */
            printf("%4d", a[i][j]);
        printf("\n");        	  /* 换行 */
    }

    return 0;
}	 	 	   	