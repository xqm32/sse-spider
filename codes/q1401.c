#include <stdio.h>

int main()
{	     	  	  	 
    double x, y;           /*定义2个双精度浮点型变量*/
    printf("Enter x:");       /*输入提示*/
    scanf("%lf", &x);       /*输入double型数据用%lf*/
    if (x < 0)
    {	     	  	  	 
        y = 0;      /*满足x<0*/
    }
    else if (x <= 15)
    {	     	  	  	 
        y = 4 * x / 3; /*不满足x<0，但满足 ,即满足 */
    }
    else
    {	     	  	  	 
        y = 2.5 * x - 10.5; /*即不满足x<0,也不满足 ,即满足x>15*/
    }
    printf("f(%.2f)=%.2f\n", x, y);
    return 0;
}	     	  	  	 