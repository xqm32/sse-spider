#include <stdio.h>

int main()
{	   	           
    int n, k, i, t;

    printf("input integer n and k:\n");
    scanf("%d%d", &n, &k);

    for (i = 0; i < k; i++)
    {	   	           
        t = n % 10;
        n = n / 10;
    }

    printf("%d", t);
}	   	           