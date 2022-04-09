#include<stdio.h>
double Calculate(double , double );

int main(void)
{	    		 	 	 
    double a, b;
    printf("Input two doubles:\n");
    scanf("%lf%lf", &a, &b);
    printf("1/((1/x+1/y)/2) = %0.3f\n", Calculate(a, b));
    return 0;
}	    		 	 	 

double Calculate(double x, double y)
{	    		 	 	 
    return 1 / ( (1 / x + 1 / y) / 2 );
}	    		 	 	 