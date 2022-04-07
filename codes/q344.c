#include <stdio.h>
main()
{	    		  	 	 
    int x;
    printf("Enter a integer:");
    scanf("%d",&x);
    if(x!=0)
    {	    		  	 	 
        if(x>0)
        {	    		  	 	 
            x=x%2;
            if(x==0) printf("The integer is a plus even number\n");
            else printf("This integer is a plus odd number\n");
        }
        else
        {	    		  	 	 
            x=x%2;
            if(x==0) printf("This integer is a minus even number\n");
            else printf("This integer is a minus odd number\n");
        }
    }
    else printf("This integer is zero.\n");
}	    		  	 	 
