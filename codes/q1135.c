#include <stdio.h>

int MaxCommonFactor(int a, int b);

main()
{	    	   	  
    int a, b, x;
    printf("Input a,b:");
    scanf("%d,%d", &a, &b);
    x = MaxCommonFactor(a, b);
    if (x < 0)
        printf("Input Error!\n");
    else
        printf("%d\n", x);
}	    	   	  
int MaxCommonFactor(int a, int b)
{	    	   	  
    if (a <= 0 || b <= 0)
        return -1;
    while (a != b)
    {	    	   	  
        if (a > b)
            a = a - b;
        else if (b > a)
            b = b - a;
    }
    return a;
}	    	   	  

