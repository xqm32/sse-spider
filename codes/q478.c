#include<stdio.h>
#include <math.h>
#define EPS 1e-8
int main()
{		   	     
    float x0, y0, r, d, x, y;
    printf("请输入圆的圆心坐标：");
    scanf("%f,%f", &x0, &y0);
    printf("请输入圆的半径：");
    scanf("%f", &r);
    printf("请输入要判断的点的坐标(x,y)：");
    scanf("%f,%f", &x, &y);
    d = (x - x0) * (x - x0) + (y - y0) * (y - y0) - r * r;
    if (fabs(d) < EPS)
        printf("该点在圆上\n");
    else if (d > 0)
        printf("该点不在圆内\n");
    else if (d < 0)
        printf("该点在圆内\n");
    return 0;
}		   	     
