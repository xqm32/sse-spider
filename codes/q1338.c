#include <stdio.h>

int main()
{	       	
    int i;
    for (i = 100; i <= 1000; i++)
    {	       	
        if (i % 3 == 0 && i % 5 == 0 && i % 17 == 0)
        {	       	
            printf("%d\n", i);
        }
    }
    return 0;
}	       	

