#include <stdio.h>
main() 
{  
    int x, y;
    for (x = 1; x <= 98; x++)//4 
    {  
        for (y = 1; y < 98; y++)//4
        { 
            if (x + y == 98 && 2 * x + 4 * y == 386) //4
            { 
                printf("x=%d,y=%d\n", x, y); //2
            }
        }
    }
}  