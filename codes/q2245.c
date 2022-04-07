#include <stdio.h>
#include <math.h>
int main()
{	 	 		  			 
    long c, d, i, j, f = 0;
    int t;
    printf("Please input c and d(c>2):");
    scanf("%ld,%ld", &c, &d); //1
    if (c % 2 == 0) //1
        c++; 
    for (i = c; i <= d; i += 2) //1
    {	 	 		  			 
        for (t = 0, j = 3; j <= sqrt(i); j += 2) //1
        {	 	 		  			 
            if (i % j == 0) //1
            {	 	 		  			 
                t = 1; //1
                break;//1
            }
        }
        if (t == 0) //1
        {	 	 		  			 
            if (i - f == 2) //1
            {	 	 		  			 
                printf("(%ld,%ld)", f, i); //1
            }
            f = i;
        }
    }
    
    return 0;
}	 	 		  			 