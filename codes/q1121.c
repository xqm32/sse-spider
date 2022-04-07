#include <stdio.h>

long fact(int n);

main()
{	   	  
    int n;
    unsigned long result = 0;

    printf("Input n:");
    scanf("%d", &n);

    result = fact(n);
    if (result != -1)
        printf("%d != %u", n, result);
}	   	  
long fact(int n)
{	   	  
    unsigned long result;
    if (n < 0)
    {	   	  
        printf("n<0,data error!\n");
        return -1;
    }
    else if (n == 0 || n == 1)
        return 1;
    else
    {	   	  
        result = n * fact(n - 1);
        return result;
    }
}	   	  

