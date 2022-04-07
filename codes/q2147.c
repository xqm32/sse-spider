#include <stdio.h>
#include <math.h>
main()
{ 
	float sum = 0, term = 1.0, sign = 1.0;   
	int   n = 1;            
	                  
	while (fabs(term) >= 1e-4)     
	{	 	 	 	   	 	  
   		sum = sum + term;           
   		sign = -sign;              
   		n = n + 2;                 
   		term = sign / n;            
  	}
 	
 	printf("sum=%f\n",sum);
}	 	 	 	   	 	  