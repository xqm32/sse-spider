#include <stdio.h>
main()
{	   	   	  	   
    int x, y, z, t, count = 0;
    printf("\tMEN\tWOMEN\tCHILDREN\n");
    printf("-----------------------------------------\n");
    for (x = 0; x <= 16; x++)
    {	   	   	  	   
        t = (50 - 3 * x) / 2;
        for (y = 0; y <= t; ++y)
        {	   	   	  	   
            z = 30 - x - y;
            if (3 * x + 2 * y + z == 50)
                printf("%2d:\t%d\t%d\t%d\n", ++count, x, y, z);
        }
    }
}	   	   	  	   