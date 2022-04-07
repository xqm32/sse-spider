#include <stdio.h>
#include <math.h>

main()
{  	  
    long int i, x, y, z;
    int flag = 3;
    for (i = 1; flag > 0; i++)
    {  	  
        x = sqrt(i + 100); //2
        y = sqrt(i + 268); //2
        if (x * x == i + 100 && y * y == i + 268) //3
        {  	  
            flag--;
            printf("%ld\n", i); //1
        }
    }
}  	  