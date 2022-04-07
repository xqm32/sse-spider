#include  <stdio.h>
#define N 10
void ReadData(int a[], int n);
void PrintData(int a[], int n);
void Swap(int *x, int *y);
int main()
{     	 	
    int  a[N], b[N], i, n;
    printf("Input array size(n<=10):");
    scanf("%d", &n);
    printf("Input array a:");
    ReadData(a, n);
    printf("Input array b:");
    ReadData(b, n);
    for (i = 0; i < n; i++)//2
    {     	 	
        Swap(&a[i], &b[i]);//2
    }
    printf("Output array a:");
    PrintData(a, n);
    printf("Output array b:");
    PrintData(b, n);
    return 0;
}     	 	
void ReadData(int a[], int n)
{     	 	
    int i;
    for (i = 0; i < n; i++)
    {     	 	
        scanf("%d", &a[i]);
    }
}     	 	
void PrintData(int a[], int n)
{     	 	
    int i;
    for (i = 0; i < n; i++)
    {     	 	
        printf("%5d", a[i]);
    }
    printf("\n");
}     	 	
void  Swap(int *x, int *y)
{     	 	
    int  temp;
    temp = *x;//2
    *x = *y;//2
    *y = temp;//2
}     	 	