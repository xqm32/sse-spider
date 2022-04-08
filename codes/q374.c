#include <stdio.h>
#include <stdlib.h>
main()
{	    			 	  
    int *p,n,i;
    printf("Enter array size:");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        *(p+i)=i*10;
    for(i=0;i<n;i++)
        printf("array[%d]=%d\n",i,*(p+i));
}	    			 	  
