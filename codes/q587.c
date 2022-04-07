#include <stdio.h>
int main()
{	   	   		  
    int x, y, z, i, result = 532;
    for (x = 1; x <= 5; x++)
        for (y = 1; y <= 3; y++)
            for (z = 1; z <= 2; z++)
            {	   	   		  
                i = (100 * x + 10 * y + z) + (100 * y + 10 * z + z);
                if (i == result)
                    printf("x=%d,y=%d,z=%d\n", x, y, z);
            }
    return 0;
}	   	   		  

