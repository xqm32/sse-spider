#include "stdio.h"
main()
{	
    int i,a,n=1;
    while(n<=7)
    { 	
        do
        {	
            scanf("%d",&a);			
        }while(a<1 || a>50);		
        for(i=1;i<=a;i++)
            printf("*");
        printf("\n");
        n++;
    }
}	   	    		 