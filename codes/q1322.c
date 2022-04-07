#include <stdio.h>

int MinCommonMultiple(int a, int b) ;

main()
{	    		  
	int a, b, x;

	printf("Input a,b:");
	scanf("%d,%d",&a,&b);

	x = MinCommonMultiple(a,b);
	printf("MinCommonMultiple = %d\n", x);
}	    		  
int MinCommonMultiple(int a, int b)
{	    		  
	int i;

	for (i=1; i<b; i++)
	{	    		  
		if ((i*a) % b == 0)
			return i*a;
	}
	return b*a;
}	    		  
