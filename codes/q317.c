﻿#include <stdio.h>
#include <math.h>
#define EPS  1e-1
int main()
{    	  
    float a, b, c, s, area;
    int flag = 1;
    scanf("%f,%f,%f", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b)
    {    	  
        if (fabs(a - b) <= EPS && fabs(b - c) <= EPS && fabs(c - a) <= EPS)//1
        {    	  
            printf("等边");
            flag = 0;
        }
        else if (fabs(a - b) <= EPS || fabs(b - c) <= EPS || fabs(c - a) <= EPS)
        {    	  
            printf("等腰");
            flag = 0;
        }
  
        if (fabs(a * a + b * b - c * c) <= EPS   || fabs(a * a + c * c - b * b) <= EPS
                || fabs(c * c + b * b - a * a) <= EPS) //1
        {    	  
            printf("直角");
            flag = 0;
        }
        if (flag)
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