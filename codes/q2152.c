#include <stdio.h>
int MinCommonMultiple(int a, int b);
main()
{	 	 	 	 	   
	int a, b, x;
	printf("Input a,b:");
	scanf("%d,%d",&a,&b);
	x = MinCommonMultiple(a,b);//1
	printf("MinCommonMultiple = %d\n", x);
}	 	 	 	 	   
int MinCommonMultiple(int a, int b)
{	 	 	 	 	   
	int i;
	for (i=1; i<=b; i++)//1
	{	 	 	 	 	   
		if ((i*a) % b == 0)//2
			return i*a;//1
	}
}	 	 	 	 	   