#include <stdio.h>
main()
{	    	 	 	 
    static int a[5]={10,20,30,40,50};
    int i=5;
    while(--i>=0)
        printf("\ta[%d]=%d,",i,a[i]);
}	    	 	 	 
