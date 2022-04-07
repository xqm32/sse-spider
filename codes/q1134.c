#include <stdio.h>
#include <math.h>

#define LIMIT 1e-1

main()
{	    	   	 	 
    float	a, b, c;
    int		flag = 1;

    scanf("%f, %f, %f", &a, &b , &c);
    if (a + b > c && b + c > a && a + c > b)//1
    {	    	   	 	 
        if (fabs(a - b) <= LIMIT || fabs(b - c) <= LIMIT || fabs(c - a) <= LIMIT)//1
        {	    	   	 	 
            printf("等腰");
            flag = 0;
        }
        if (fabs(a * a + b * b - c * c) <= LIMIT
                || fabs(a * a + c * c - b * b) <= LIMIT
                || fabs(c * c + b * b - a * a) <= LIMIT)//1
        {	    	   	 	 
            printf("直角");
            flag = 0;
        }
        if (flag)//1
        {	    	   	 	 
            printf("一般");
        }
        printf("三角形\n");
    }
    else
    {	    	   	 	 
        printf("不是三角形\n");
    }
}	    	   	 	 

