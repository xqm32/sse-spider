#include <stdio.h>

const int M = 3;

int main()
{	   	  	  	   
    int n, s = 0,i;
    printf("please input the total of numbers:");
    scanf("%d", &n);
    for (i = 2; i <= n; ++i)
        s = (s + M) % i;
    printf("%d is left\n", s + 1);
    return 0;
}	   	  	  	   