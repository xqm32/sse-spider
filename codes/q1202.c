#include <stdio.h>

int main()
{	    	 	 		 
    int m;
    printf("Input m:");
    scanf("%d", &m);		//1
    if (m > 0)				//1
    {	    	 	 		 
        if (m % 2 == 0)		//1
        {	    	 	 		 
            printf("%d is a positive even\n", m);
        }
        else					//1
        {	    	 	 		 
            printf("%d is a positive odd\n", m);
        }
    }
    else if (m < 0)			//1
    {	    	 	 		 
        if (m % 2 == 0)
        {	    	 	 		 
            printf("%d is a negative even\n", m);	//1
        }
        else
        {	    	 	 		 
            printf("%d is a negative odd\n", m);	//1
        }
    }
    else
    {	    	 	 		 
        printf("%d is zero. It is an even\n", m);
    }
    return 0;
}	    	 	 		 