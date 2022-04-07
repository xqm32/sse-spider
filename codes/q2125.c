#include <stdio.h>
main()
{	 	  	  	 
	float sum; 
	int i;
	sum = 0;//2
	for (i = 1; i <= 100; i++) //4
	{	 	  	  	 
            if(i%100/10==6 || i%10==6)  //6
		sum = sum + 1.0/i;      //2
	}	
	printf("The result is %.2f\n", sum);//2
}	 	  	  	 