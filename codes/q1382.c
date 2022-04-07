#include <stdio.h>
int MaxCommonFactor(int a, int b);
main()
{	int a, b, x;

	printf("Input a,b:");
	scanf("%d,%d",&a,&b);
	x = MaxCommonFactor(a,b);
	printf("MaxCommonFactor = %d\n", x);
}	     	  	 	
int MaxCommonFactor(int a, int b)
{	     	  	 	
	int r;

	do{	     	  	 	
		r = a % b;
		a = b;
		b = r;
	}while (r != 0);
	return  a;
}	     	  	 	
