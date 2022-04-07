#include <stdio.h>
int  main()
{	 	   	 	    	
    int a, b, c, count = 0;    //2
    for (a = 1; a <= 5; a++)   //3
    {	 	   	 	    	
        for (b = 1; b <= 5; b++)  //3
        {	 	   	 	    	
            for (c = 1; a != b && c <= 5; c++)  //3
            {	 	   	 	    	
                if (c != a && c != b)   //3
                    printf("%2d:%d,%d,%d\n", ++count, a, b, c);   //2
            }
        }
    }

    return 0;
}	 	   	 	    	