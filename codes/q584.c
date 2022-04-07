#include<stdio.h>

int main()
{	   	   	 	
    int i, j, n, sum, count;

    printf("\nInput an integer here please:");
    scanf("%d", &n);
    printf("\n");

    i = 1;
    for (; i <= n * n * n; i += 2)
    {	   	   	 	
        sum = 0;
        count = 0;
        for (j = i; j <= n * n * n; j += 2)
        {	   	   	 	
            sum = sum + j;
            count++;
            if ((n * n * n == sum) && (count == n))
                break;
        }
        if ((sum == n * n * n) && (count == n))
            break;
    }

    printf("%d*%d*%d=", n, n, n);

    for (; i < j; i += 2)
        printf("%d+", i);
    printf("%d", i);
}	   	   	 	




