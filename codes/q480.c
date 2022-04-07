#include <stdio.h>

int main()
{	   	       
    int x, y;

    printf("input the value of x:");
    scanf("%d", &x);

    y = x;
    if (x < 0)
        y = -x;
    printf("|x|=%d\n", y);

    return 0;
}	   	       