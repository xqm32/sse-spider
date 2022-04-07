#include  <stdlib.h>
#include  <math.h>
#include  <stdio.h>
#define   EPS 1e-6
int main()
{		   	  
    float  a, b, c, disc, p, q;
    printf("Please enter the coefficients a,b,c:");
    scanf("%f,%f,%f", &a, &b, &c);//1
    if (fabs(a) <= EPS)         //1
    {		   	  
        printf("It is not a quadratic equation!\n");
        exit(0);//1
    }
    disc = b * b - 4 * a * c; //1
    p = - b / (2 * a);  //1
    q = sqrt( fabs( disc ) ) / (2 * a);//1
    if (fabs(disc) <= EPS)    //1
    {		   	  
        printf("x1 = x2 = %.2f\n", p);
    }
    else
    {		   	  
        if (disc > EPS)       //1
        {		   	  
            printf("x1 = %.2f, x2 = %.2f\n", p + q, p - q);
        }
        else    //1                 
        {		   	  
            printf("x1 = %.2f+%.2fi, ", p, q);
            printf("x2 = %.2f-%.2fi\n", p, q);
        }
    }
    return 0;
}		   	  