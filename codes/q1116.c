#include <stdio.h>

main()
{	   	   
    float a, b;
    float sum, minus, product, quotient;
    int remainder;

    printf("\n请输入两个数:\n");
    scanf("%f%f", &a, &b);
    sum = a + b;
    minus = a - b;
    product = a * b;
    quotient = a / b;
    remainder = (int)a % (int)b;
    printf("和为:%.2f\n", sum);
    printf("差为:%.2f\n", minus);
    printf("积为:%.2f\n", product);
    printf("商为:%.2f\n", quotient);
    printf("余数为:%d\n", remainder);
}	   	   

