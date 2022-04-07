#include <stdio.h>
main()
{	    		  
    int i;
    for(i=0;i<=5;i++)
        printf("2 power %d is %d, -3 power %d is %d\n",i,power(2,i),i,power(-3,i));
}	    		  
power(int x,int n)
{	    		  
    int p;
    for(p=1;n>0;n--)
        p*=x;
    return p;
}	    		  
