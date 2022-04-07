#include <stdio.h>
int main()
{  	  
    int x, y;
    for (x = 1; x <= 98; x++)//2
    {  	  
        for (y = 1; y < 98; y++)//2
        {  	  
            if (x + y == 98 && 2 * x + 4 * y == 386) //2
            {  	  
                printf("x=%d,y=%d\n", x, y); //1
            }
        }
    }
    return 0;
}  	  