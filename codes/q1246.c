#include <stdio.h>
#include <math.h>

int main()
{	    	   
    float	a, b, c;
    int	flag = 1;

    scanf("%f, %f, %f", &a, &b , &c);	//原来%d错
    if (a + b > c && b + c > a && a + c > b)//1
    {	    	   
        if (fabs(a - b) <= 0.1 || fabs(b - c) <= 0.1 || fabs(c - a) <= 0.1)//1
        {	    	   
            printf("等腰");
            flag = 0;
        }
        if (fabs(a * a + b * b - c * c) <= 0.1
                || fabs(a * a + c * c - b * b) <= 0.1
                || fabs(c * c + b * b - a * a) <= 0.1) //原来多了else
        {	    	   
            printf("直角");
            flag = 0;
        }
        if (flag)  //原来flag前面多了!
        {	    	   
            printf("一般");
        }
        printf("三角形\n");
    }
    else
    {	    	   
        printf("不是三角形\n");
    }
    return 0;
}	    	   