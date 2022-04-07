#include <stdio.h>
#include  <math.h>
int main()
{		   	 	  
    float  a, b, c, s, area;

    printf("Input a,b,c:"); //1
    scanf("%f,%f,%f", &a, &b, &c);//1

    if (a + b > c && b + c > a && a + c > b)//2
    {		   	 	  
        s = (float)(a + b + c) / 2;   //1
        area = sqrt(s * (s - a) * (s - b) * (s - c));//1
        printf("area=%.4f\n", area);//1
    }
    else       //1
    {		   	 	  
        printf("It is not a triangle\n");//1
    }
    return 0;
}		   	 	  