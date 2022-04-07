#include <stdio.h>
int main()
{		     	  
    int  x, y, z;
    printf("Man\tWomen\tChildren\n");//1
    for (x = 0; x <= 30; x++)//1
    {		     	  
        for (y = 0; y <= 30; y++)//1
        {		     	  
            for (z = 0; z <= 30; z++)//1
            {		     	  
                if (x + y + z == 30 && 3 * x + 2 * y + z == 50)//2
                {		     	  
                    printf("%3d\t%5d\t%8d\n", x, y, z);//1
                }
            }
        }
    }
    return 0;
}		     	  