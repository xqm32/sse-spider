#include <stdio.h>

int MaxCommonFactor(int a, int b);

int main()
{	          
    int x, y;
    scanf("%d,%d", &x, &y);
    printf("%d", MaxCommonFactor(x, y));
    return 0;
}	          

int MaxCommonFactor(int a, int b)
{	          
    int min = a, i;
    if (a <= 0 || b <= 0)
        return -1;
    else
    {	          
        if (b < a)
        {	          
            min = b;
        }
        for (i = min; i >= 1; i--)
        {	          
            if (a % i == 0 && b % i == 0)
                return i;
        }
    }
}	          


