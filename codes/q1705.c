#include <stdio.h>
main()
{	       	  	   
	long term = 1, sum = 0; //1
	int i;
	for (i=1; i<=10; i++) //1
	{	       	  	   
		term = term * i; //1
		sum = sum + term; //1
	}
	printf("1!+2!+...+10! = %ld\n", sum); //1
}	       	  	   