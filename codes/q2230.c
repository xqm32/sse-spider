#include <stdio.h>
#include <math.h>
float fun(float num)
{	 	   	 	   
    int s;
    float n,t,pi;
    t=1;pi=1;n=1;s=1;
    while(fabs(t)>=num)
    {	 	   	 	   
        n=n+2;
        s=-s;
        t=s/n;
        pi=pi+t;
    }
    pi=pi*4;
    return pi;
}	 	   	 	   
main()
{	 	   	 	   
    float n1,n2;
    printf("Enter a float number: ");
    scanf(" %f",&n1);
    n2=fun(n1);
    printf( "%6.4f\n ",n2);

}	 	   	 	   