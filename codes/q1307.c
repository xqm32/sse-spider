#include <stdio.h>
#include <math.h>

int main()
{	     
    float a, xn0, xn1;

    printf("请输入一个整数：");
    scanf("%f", &a);

    xn0 = a / 2;
    xn1 = (xn0 + a / xn0) / 2;
    do
    {	     
        xn0 = xn1;
        xn1 = (xn0 + a / xn0) / 2;
    }
    while (fabs(xn0 - xn1) >= 1e-5);
    printf("%5.2f的平方根=%8.5f\n", a, xn1);

    return 0;
}	     