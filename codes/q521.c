#include <stdio.h>
main()
{	   	 	 	    
    int  num;
    int  sum = 0;                     /* 累加求和变量初始化为0 */
    do
    {	   	 	 	    
        printf("Input num:");
        scanf ("%d", &num);         /* 输入数据 */
        sum = sum + num;	           /* 做累加运算 */
        printf("sum = %d\n", sum); /* 输出累加运算结果 */
    }
    while (num != 0);                /* num为0时停止累加运算 */
}	   	 	 	    

