#include <stdio.h>

int main(void)
{	 	 	    
    int i, flag, x;
    int a[5];

    printf("Enter 5 integers: ");	/* 提示输入5 个数 */
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    printf("Enter x: ");        	/* 提示输入 x */
    scanf("%d", &x);
    /* 在数组a中查找x */
    flag = 0;                	        /* 先假设x不在数组a中，置flag为0 */
    for (i = 0; i < 5; i++)
        if (a[i] == x)         	       /* 如果在数组a中找到了x */
        {	 	 	    
            printf("Index is %d\n", i); /* 输出相应的下标 */
            flag = 1;              	/* 置flag为1，说明在数组a中找到了x */
            break;                 	/* 跳出循环 */
        }
    if (flag == 0)    			/* 如果flag为0，说明x不在a中 */
        printf("Not Found\n");

    return 0;
}	 	 	    