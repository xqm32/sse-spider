#include <stdio.h>

int main()
{	 	 		 
    int num1, num2;

    printf("请输入两个整数：");
    scanf("%d%d", &num1, &num2);

    printf("%d is %.1f percent of %d", num1,
           (num1 * 100.0 / num2), num2);

    return 0;
}	 	 		 