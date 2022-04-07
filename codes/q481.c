#include <stdio.h>

int main()
{	   	     
    int x, y;

    printf("input the value of x and y:");
    scanf("%d%d", &x, &y);    //1

    if (x >= y)              //2
        printf("The max of %d and %d  is %d\n", x, y, x);     //1
    else                         //1
        printf("The max of %d and %d  is %d\n", x, y, y);     //1

    return 0;
}	   	     