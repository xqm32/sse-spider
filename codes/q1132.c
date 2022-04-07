#include <stdio.h>

int MaxCommonFactor(int a, int b);

main()
{	    	    	
    int a, b, x;

    scanf("%d,%d", &a, &b);
    x = MaxCommonFactor(a, b);
    if (x < 0) //或者if (x==-1)
        printf("Input Error!\n");
    else
        printf("%d\n", x);
}	    	    	

int MaxCommonFactor(int a, int b)
{	    	    	
    int r;
    if (a <= 0 || b <= 0)
        return -1;
    do
    {	    	    	
        r = a % b;
        a = b;
        b = r;
    }
    while (r != 0);
    return  a;
}	    	    	

