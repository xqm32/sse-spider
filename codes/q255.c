#include <stdio.h>

int main(void)
{     		   
    int num[10];
    int n, i, tmp;
    int max, min;
    printf("Input n(n<=10):");
    scanf("%d", &n);
    printf("Input %d numbers:", n);
    for ( i = 0; i < n; i++)
    {     		   
        scanf("%d", &num[i]);
    }
    max = 0;
    min = 0;
    for ( i = 1; i < n; i++)
    {     		   
        if (num[i] > num[max])
        {     		   
            max = i;
        }
        else if (num[i] < num[min])
        {     		   
            min = i;
        }
    }
    tmp = num[min];
    num[min] = num[max];
    num[max] = tmp;
    printf("Exchange results:");
    for ( i = 0; i < n; i++)
    {     		   
        printf("%5d", num[i]);
    }

    return 0;
}     		   