#include <stdio.h>

int main(void)
{	 	 	     
    double value1, value2;
    char operator;
    printf("Type in an expression: ");    /* 提示输入一个表达式 */
    scanf("%lf%c%lf", &value1, &operator, &value2);
    switch (operator)
    {	 	 	     
    case '+':
        printf("=%.2f\n", value1 + value2);
        break;
    case '-':
        printf("=%.2f\n", value1 - value2);
        break;
    case '*':
        printf("=%.2f\n", value1 * value2);
        break;
    case '/':
        printf("=%.2f\n", value1 / value2);
        break;
    default:
        printf("Unknown operator\n");
        break;
    }

    return 0;
}	 	 	     