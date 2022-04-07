#include <stdio.h>
#include <stdlib.h>
#define N 10
int Gcd(int a, int b)
{	     	   
    int tmp, c;
    if (a == 0 || b == 0)
    {	     	   

        return 0;
    }
    else
    {	     	   
        if (a < b)
        {	     	   
            tmp = a;
            a = b;
            b = tmp;
        }
    }
    c = a % b;
    while (c)
    {	     	   
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}	     	   

int main()
{	     	   
    int a[N];
    int i, maxNum, minNum, res;
    printf("Input 10 numbers:\n");
    for (i = 0; i < N; ++i)
    {	     	   
        scanf("%d", &a[i]);
    }
    maxNum = a[0];
    minNum = a[0];
    for (i = 1; i < N; ++i)
    {	     	   
        maxNum = a[i] > maxNum ? a[i] : maxNum;
        minNum = a[i] < minNum ? a[i] : minNum;
    }
    printf("maxNum=%d\n", maxNum);
    printf("minNum=%d\n", minNum);
    res = Gcd(maxNum, minNum);
    if (res != 0)
    {	     	   
        printf("%d", res);
    }

    return 0;
}	     	   