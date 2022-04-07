#include <stdio.h>
#include <math.h>

int main()
{	   	 	  		 	 
    double a, b, c, x1, x2;

    printf("请分别输入二次项、一次项、常数项系数a,b,c：");
    scanf("%lf %lf %lf", &a, &b, &c);//输入方程的系数

    //打印方程
    printf("方程%.1lfx^2", a);
    if (b > 0)
        printf("+");
    printf("%.1lfx", b);
    if (c > 0)
        printf("+");
    printf("%.1lf=0", c);

    if (b * b - 4 * a * c < 0)
    {	   	 	  		 	 
        printf("无解.\n");
    }
    else
    {	   	 	  		 	 
        x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        if (b * b - 4 * a * c > 0)
            printf("有两个根：x1=%.1lf,x2=%.1lf\n", x1, x2);
        else
            printf("有一个根：x=%.1lf\n", x1);
    }

    return 0;
}	   	 	  		 	 