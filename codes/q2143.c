#include <stdio.h>
main()
{	 	 	 	 	   
	long term = 0,sum = 0;//2
	int a , i, n;

	printf("Enter n,a:\n");
	scanf("%d,%d", &n, &a);        //2 

	for (i = 1; i <= n; i++)      //3
	{	 	 	 	 	   
		term = term * 10 + a;   //3    
		sum = sum + term%i;          //3
	}
	printf("Sum=%ld\n",sum);   //1
}	 	 	 	 	   