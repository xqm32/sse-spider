#include <stdio.h>
main()
{	   	 	 	  
    int  num = 1;                       /* 变量num必须初始化为1 */
    int  sum = 0;                       /* 累加求和变量初始化为0 */
    while (num != 0)                   /* num为0时停止累加运算 */
    {	   	 	 	  
        printf("Input num:");
        scanf ("%d", &num);           /* 输入数据 */
        sum = sum + num;	             /* 做累加运算 */
        printf("sum = %d\n", sum);   /* 输出累加运算结果 */
    }
}	   	 	 	  

