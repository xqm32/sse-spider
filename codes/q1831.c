#include <stdio.h>
int main()
{	          
    float x, y;

    printf("Please input x:");
    scanf("%f", &x); //1

    if (x < 1) //1
        printf("y = %.2f\n", x);//1
    else if (x >= 1 && x < 10) //1
        printf("y = %.2f\n", 2 * x - 1);//1
    else if (x >= 10) //1
        printf("y = %.2f\n", 3 * x - 11); //1

    return 0;
}	          