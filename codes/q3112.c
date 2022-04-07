#include <stdio.h>
#include <stdlib.h>

int main()
{	      	 
    int a[100], b[100];
    int i;
    for ( i = 0; i < 100; i++)
    {	      	 
        a[i] = i + 1;
        b[i] = 0;
    }
    int j = 0, k = 0;
    while  (b[99] == 0)
    {	      	 
        for ( i = 0; i < 100; i++)
        {	      	 
            if (a[i] != 0) j++;
            if (j == 5)
            {	      	 
                b[k++] = i + 1;
                a[i] = 0;
                j = 0;
            }
        }
    }
    printf("%d\n", b[99]);
    return 0;
}	      	 