#include <stdio.h>
main()
{	    		 	 	 
	int i, j, k, n;

	printf("result is:");
	for (n=100; n<1000; n++)
	{	    		 	 	 
		i = n / 100;              
		j = (n - i * 100) / 10; 
		k = n % 10;
		if (i*100+j*10+k == i*i*i+j*j*j+k*k*k)
		{	    		 	 	 
			printf("%d\t",n);
		}
	}
	printf("\n");
}	    		 	 	 
