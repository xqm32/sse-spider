#include <stdio.h>

int main()
{	          
    int a[30], b[6];
    int i, j = 0, n = 1, sum = 0;
    for (i = 0; i < 30; i++, n++)
    {	          
        a[i] = 2 * n;
        sum += a[i];
        if (n % 5 == 0)
        {	          
            b[j++] = sum / 5;
            sum = 0;
        }
    }
    for (i = 0; i < 6; i++)
    {	          
        printf("%6d", b[i]);
    }
    return 0;
}	          

