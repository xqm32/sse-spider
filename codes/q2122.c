#include <stdio.h>
main()
{	 	  	 	  
   int i;
   float term;
   float sum;
   sum=0;//2
   for(i=1;i<100;i=i+2)    //4
   {	 	  	 	  
      term=1.0/(i*(i+1)*(i+2));//4
      sum+=term;//4
   }
   printf("sum=%f\n",sum);//2
}	 	  	 	  