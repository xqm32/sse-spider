#include <stdio.h>

int main(void)
{	 	 	      
    int i;
    int fib[20] = {1, 1};      	/* 数组初始化，生成fibonacci数列前2个数 */

    /* 计算fibonacci数列剩余的8个数 */
    for (i = 2; i < 10; i++)
        fib[i] = fib[i - 1] + fib[i - 2];

    /* 输出fibonacci数列 */
    for (i = 0; i < 10; i++)
    {	 	 	      
        printf("%6d", fib[i]);
        if ((i + 1) % 5 == 0)		/* 每输出5个数就换行 */
            printf("\n");
    }

    return 0;
}	 	 	      