#include <stdio.h>

#define  PI  3.14

int main()
{	   	    
    float radius, circleArea, circlePerimeter;

    printf("请输入半径的值：");
    scanf("%f", &radius);

    circleArea = PI * radius * radius;
    circlePerimeter = 2 * PI * radius;

    printf("半径为%5.2f的圆的面积为%5.1f,圆的周长为%5.1f\n", radius, circleArea, circlePerimeter);

    return 0;
}	   	    