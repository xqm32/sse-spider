#include<stdio.h>
#define  N  20  	             /* 插入前数组最大元素个数 */
void  Insert(int a[], int n, int x);
int main()
{	      	   	 
    int  a[N + 1];            /* 定义数组长度为插入前的数组元素个数加1 */
    int  x, i, n;
    printf("Input array size:\n");
    scanf("%d", &n);       	/* 输入插入前数组元素个数 */
    printf("Input array:\n");
    for (i = 0; i < n; i++)
    {	      	   	 
        scanf("%d", &a[i]);	/* 输入插入前已按升序排序的数组元素 */
    }
    printf("Input x:\n");
    scanf("%d", &x);      	/* 输入待插入的元素x */
    Insert(a, n, x);     	     /* 插入元素x到已排序数组中 */
    printf("After insert %d:\n", x);
    for (i = 0; i < n + 1; i++)
    {	      	   	 
        printf("%4d", a[i]); /* 输出插入x后的数组元素 */
    }
    return 0;
}	      	   	 
/* 函数功能：将x插入到一个已按升序排序的数组中 */
void  Insert(int a[], int n, int x)
{	      	   	 
    int  i = 0, pos;
    while (i < n && x > a[i])	/* 查找待插入位置 */
    {	      	   	 
        i++;
    }
    pos = i;                       /* 记录元素x应插入的数组下标位置pos */
    for (i = n - 1; i >= pos; i--) /* 从尾部开始移动pos及其后所有的元素 */
    {	      	   	 
        a[i + 1] = a[i];         /* 向后复制数组元素 */
    }
    a[pos] = x;                   /* 插入元素x到位置pos */
}	      	   	 