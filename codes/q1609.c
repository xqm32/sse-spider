#include <stdio.h>
#define  N   10
void InputMatrix(int a[N][N], int n);
int AddDiagonal(int a[N][N], int n);
int main()
{	   		 		   
    int a[N][N], n, sum; //1
    printf("Input n:"); //1
    scanf("%d", &n); //1  
    InputMatrix(a, n); //1
    sum = AddDiagonal(a, n); //1
    printf("sum = %d\n", sum); //1
    return 0;
}	   		 		   
/*  函数功能： 输入n×n矩阵的元素值，存于数组a中 */
void InputMatrix(int a[N][N], int n)
{	   		 		   
    int i, j; //1
    printf("Input %d*%d matrix:\n", n, n); //1
    for (i = 0; i < n; i++) //1
    {	   		 		   
        for (j = 0; j < n; j++) //1
        {	   		 		   
            scanf("%d", &a[i][j]); //1
        }
    }
}	   		 		   
/*  函数功能： 计算n×n矩阵中两条对角线上的元素之和 */
int AddDiagonal(int a[N][N], int n)
{	   		 		   
    int i, j, sum = 0; //1
    for (i = 0; i < n; i++) //1
    { 
        for (j = 0; j < n; j++) //1
        {	   		 		   
            if (i == j || i + j == n - 1) //1
                sum = sum + a[i][j];
        }
    }
    return sum;
}	   		 		   