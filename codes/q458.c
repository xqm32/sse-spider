#include <stdio.h>

int main()
{	   	         	 
    int a[20] = {2, 4, 6, 8, 10, 12, 14, 16};
    int i, j, n;
    printf("Enter n:");
    scanf("%d", &n);
    for (i = 0; i < 8; i++)
        if (a[i] > n)
        {	   	         	 
            for (j = 8; j > i; j--)
                a[j] = a[j - 1];
            a[i] = n;
            break;
        }
    if (i == 8)
        a[i] = n;
    for (i = 0; i < 9; i++)
        printf("%d ", a[i]);
    printf("\n");
}	   	         	 