#include<stdio.h>
main()
{	 	 	 	         
  	int   m;
       long  i;
       long  sum = 0;
  	for (i=1; ;i++)
  	{	 	 	 	         
    		sum = sum + i*i*i;
	    	if (sum >= 1000000)
	   		break;
  	}
  	m = i-1;
  	printf("m = %d\n",m);
}	 	 	 	         