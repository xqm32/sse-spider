#include  <stdio.h>
main()
{	   	 	 	 	   	 
    float r;
    float circum;
    float area;
    printf("Input r:");           /* 提示用户输入半径的值*/
    scanf("%f", &r);               /* 从键盘输入半径的值 */
    circum = 2 * 3.14159 * r;
    area = 3.14159 * r * r;
    printf("circum = %.2f\n", circum);
    printf("area = %.2f\n", area);
}	   	 	 	 	   	 