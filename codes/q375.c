#include <stdio.h>
double px(double x,int n)
{	    			  
    if(n==1)
        return x;
    else
        return (x*(1-px(x,n-1)));
}	    			  
main()
{	    			  
    double x; int n;
    printf("Enter X and N:");
    scanf("%lf%d",&x,&n);
    printf("px=%lf\n",px(x,n));
}	    			  
