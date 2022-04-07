#include <stdio.h>
swap(pa,pb)
    int *pa,*pb;
{	    	  	  	
    int temp;
    temp=*pa;*pa=*pb;*pb=temp;
}	    	  	  	
main()
{	    	  	  	
    int a[5]={1,2,3,4,5};
    int b[5]={10,20,30,40,50};
    int i;
    for(i=0;i<5;i++)
        swap(&a[i],&b[i]);
    for(i=0;i<5;i++)
        printf("a[%d]=%2d, ",i,a[i]);
    for(printf("\n"),i=0;i<5;i++)
        printf("b[%d]=%2d, ",i,b[i]);
}	    	  	  	
