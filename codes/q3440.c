#include<stdio.h>
#define N 30
void Transpose(int a[][N], int n);
void ProduceMatrix(int a[][N], int n, int start);
void PrintMatrix(int a[][N], int n);
int SumCounterDiagonal(int a[][N], int n);
int main()
{ 	  		  
    int n , sum = 0, start = 0;
    int a[N][N] = {0};//1
    printf("Input n:\n");
    scanf("%d", &n);
    printf("Input %d*%d matrixs start element:\n", n, n);
    scanf("%d", &start);//1
    ProduceMatrix(a, n, start);
    Transpose(a, n);//1
    printf("The transposed matrix is:\n");
    PrintMatrix(a, n);//1
    sum = SumCounterDiagonal(a, n);
    printf("The sum of the matrix-counter-diagonal is:%d\n", sum);
    return 0;
} 	  		  
void ProduceMatrix(int a[][N], int n, int start)
{ 	  		  
    int i, j;
    a[0][0] = start;
    for (i = 0; i < n; i++)//1
    { 	  		  
        for (j = 0; j < n; j++)
        { 	  		  
            if (i == 0 && j == 0)
                continue;
            else if (i > 0 && j == 0)
            { 	  		  
                a[i][j] = a[i - 1][n - 1] + 1;//1
            }
            else
            { 	  		  
                a[i][j] = a[i][j - 1] + 1;//1
            }
        }
    }
} 	  		  
void Transpose(int a[][N], int n)
{ 	  		  
    int i, j, temp;
    for (i = 0; i < n; i++)
    { 	  		  
        for (j = i; j < n; j++)
        { 	  		  
            temp = a[i][j];//1
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
} 	  		  
void PrintMatrix(int a[][N], int n)
{ 	  		  
    int i, j;
    for (i = 0; i < n; i++)
    { 	  		  
        for (j = 0; j < n; j++)
        { 	  		  
            printf("%4d", a[i][j]);//1
        }
        printf("\n");
    }
} 	  		  
int SumCounterDiagonal(int a[][N], int n)
{ 	  		  
    int i, j, sum = 0;
    for (i = 0; i < n; i++)
    { 	  		  
        j = n - 1 - i;//1
        sum += a[i][j];
    }
    return sum;
} 	  		  