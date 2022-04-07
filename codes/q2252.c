#include <stdio.h>
#include <math.h>

double funt(double x)
{	 	 		 	   	  
    double s;

    s = x * x - 5 * x + 4;

    return s;
}	 	 		 	   	  

int main()
{	 	 		 	   	  
    double y1, y2, y3;
    double x;

    printf("Input x: ");
    scanf("%lf", &x);

    printf("x =\t%5.2f\n", x);

    y1 = funt(x);
    printf("y1=\t%5.2f\n", y1);

    y2 = funt(x + 15);
    printf("y2=\t%5.2f\n", y2);

    y3 = funt(sin(x));
    printf("y3=\t%5.2f\n", y3);

    return 0;
}	 	 		 	   	  