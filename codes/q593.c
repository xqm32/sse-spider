#include <stdio.h>
#include <math.h>
int prime(int a);
int main()
{	   	   	
    int i;
    for (i = 3; i <= 100; i++)
    {	   	   	
        if (prime(i) && prime(i + 2))
            printf("%4d/%d", i, i + 2);
    }
    printf("\n");
    return 0;
}	   	   	

int prime(int a)
{	   	   	
    int b, k;
    if (a == 2)return 1;
    else if (a % 2 == 0)return 0;
    else
    {	   	   	
        b = 1;
        k = 3;
        while (k <= sqrt(a) && b)
        {	   	   	
            if (a % k == 0)b = 0;
            k = k + 2;
        }
        return b;
    }
}	   	   	

