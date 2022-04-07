#include <stdio.h>
main()
{	    	 	  	 	 
	int a,b;
	printf("Input an integer number:\n");    
	scanf("%d",&a);    //1
	b=a%2;      //2
	if(b==0)    //2
	{	    	 	  	 	 
		printf("%d is an even number\n",a);     //1
	}
	else
	{	    	 	  	 	 
		printf("%d is an odd number\n",a);       //1
	}
}	    	 	  	 	 