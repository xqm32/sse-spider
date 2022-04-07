#include <stdio.h>
main()
{	 	  	     	
   long i,term,sum;
   sum=0;//2
   for(i=1;i<100;i=i+2)//6    
   {	 	  	     	
      term=i*(i+1);//3
      sum+=term;//3
   }
   printf("sum=%ld\n",sum);//2
}	 	  	     	