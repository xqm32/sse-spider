#include <stdio.h>

int main()
{	 	      	
    int num1, num2, remainder, quotient;

    printf("请输入两个整数：");
    scanf("%d%d", &num1, &num2);

    remainder = num1 % num2;
    quotient = num1 / num2;

    printf("%13d Remainder = %d\n", quotient, remainder);
    printf("       ------\n");
    printf("%5d ) %5d", num2, num1);

    return 0;
}	 	      	