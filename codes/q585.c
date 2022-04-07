#include <stdio.h>
#include <stdlib.h>

int main()
{	   	   		   
    int n, i, j, k, m;
    printf("Please enter a positive integer: ");
    scanf("%d", &n);
    i = n / 100;
    m = n - 100 * i;
    j = m / 10;
    m = m - 10 * j;
    k = m;
    m = 100 * k + 10 * j + i;
    printf("%d-->%d\n", n, m);
    return 0;
}	   	   		   

