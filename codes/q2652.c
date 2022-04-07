#include <stdio.h>
int main()
{	  	     	 	 	 
    double a, b;
    char opt;
    scanf("%lf%c%lf", &a, &opt, &b);
    switch (opt)
    {	  	     	 	 	 
    case '#':
        printf("%lf#%lf=%lf\n", a, b, a + b); //1
        break;
    case '-':
        printf("%lf-%lf=%lf\n", a, b, a - b); //1
        break;
    case '*':
        printf("%lf*%lf=%lf\n", a, b, a * b); //1
        break;
    case '/':
        if (0 == b)
            printf("error"); //1
        else
            printf("%lf/%lf=%lf\n", a, b, a / b); //1
        break;
    default:
        printf("error"); //1
    }
    return 0;
}	  	     	 	 	 