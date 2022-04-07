#include <stdio.h>
main()
{	        	 
	int    upper,step;
	float  fahr = 0,celsius;
	upper = 300;            //1
	step = 20;              //1
	while (fahr <= upper)   //1
	{	        	 
       	celsius = 5.0 / 9 * (fahr - 32) ;  //1
        	printf("%4.0f%10.1f\n", fahr, celsius); 
        	fahr = fahr + step;              //1
	}
}	        	 
