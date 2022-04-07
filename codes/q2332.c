#include <stdio.h>
#define N 4
void swap(int *p1, int *p2)
{	 	          	
    int p;
    p = *p1;
    *p1 = *p2;
    *p2 = p;
}	 	          	

void sort(int a[N][N])
{	 	          	
    int i, j, k;
    for (i = 0; i < N; i++)
        for (j = 0; j < N - 1; j++)
            for (k = j + 1; k < N; k++)
                if (i % 2 == 1 ? a[i][j]<a[i][k] : a[i][j]>a[i][k])
                    swap(a[i] + j, a[i] + k);
}	 	          	
int main()
{	 	          	
    int a[N][N] = {{3, 4, 2, 1}, {8, 7, 5, 6}, {12, 10, 11, 9}, {15, 14, 16, 13}};
    int i, j;
    sort(a);
    for (i = 0; i < N; i++)
    {	 	          	
        for (j = 0; j < N; j++)
            printf("%3d", a[i][j]);
        printf("\n");
    }
}	 	          	