#include  <stdio.h>
void  Swap(int *x, int *y);
int main()
{	   	 	 		 	 	 
    int  a, b;
    printf("Please enter a,b:");
    scanf("%d,%d", &a, &b);
    printf("Before swap: a = %d, b = %d\n", a, b);/* 打印交换前的a,b */
    Swap(&a, &b);                                  /* 按地址调用函数Swap() */
    printf("After swap: a = %d, b = %d\n", a, b);/* 打印交换后的a,b */
    return 0;
}	   	 	 		 	 	 
/* 函数功能：交换两个整型数的值 */
void  Swap(int *x, int *y)
{	   	 	 		 	 	 
    int  temp;
    temp = *x;
    *x = *y;
    *y = temp;
}	   	 	 		 	 	 

