#include <stdio.h>

int main(void)
{	 	 	   
    double x, y;    //1

    printf("请输入月用电量：\n");
    scanf("%lf", &x);     //1

    if (x <= 50)       //1
    {	 	 	   
        y = 0.53 * x;          //1
        printf("应支付电费=%.2f\n", y);
    }
    else       //1
    {	 	 	   
        y = 0.58 * x;            //1
        printf("应支付电费=%.2f\n", y);
    }
     return 0;
}	 	 	   