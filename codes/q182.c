#include "stdio.h"
unsigned long Factorial(int n)
{	    	 	 	     
	if (n < 0)
	{	    	 	 	     
		printf("data error!");
		return 0;
	}
	else if (n==0 || n==1)
	{	    	 	 	     
		return 1;
	}
	else
	{	    	 	 	     
		return n * Factorial(n-1);
	}
}	    	 	 	     
main()
{	    	 	 	     
    int n;
	unsigned long x;
	printf("Input n:\n");
	scanf("%d", &n);
	x = Factorial(n);
	if(x!=0)
        printf("%d!=%ld\n", n, x);
}	    	 	 	     