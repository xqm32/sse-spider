#include <stdio.h>
int main()
{	    
    int i, j, k, count = 0;
    for (i = 1; i <= 9; i++)	//2
    {	    
        for (j = 1; j <= 19; j++)	//1
        {	    
            for (k = 1; k <= 99; k++)	//1
            {	    
                if (10 * i + 5 * j + k == 100 && i + j + k == 50)	//2
                {	    
                    printf("x = %d, y = %d, z = %d\n", i, j, k);	//1
                    count++;	//1
                }
            }
        }
    }
    printf("count = %d\n", count);	//1
    return 0;
}	    