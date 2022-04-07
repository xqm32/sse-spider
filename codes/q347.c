#include <stdio.h>
main()
{	    		    	 
    int x,y;
    printf("Enter integer X and Y:");
    scanf("%d%d",&x,&y);
    if(x!=y)
        if(x>y) printf("X>Y\n");
        else printf("X<Y\n");
    else
        printf("X=Y\n");
}	    		    	 
