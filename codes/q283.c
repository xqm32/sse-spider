#include <stdio.h>
main()
{    		 
   float x,y;
   printf("Please input x:");
   scanf("%f",&x);	//1
   if(x<1)	//1
      y=x;
   else if(x>=1 && x<10)	//1
      y=2*x-1;
   else if(x>=10)	//1
      y=3*x-11;
   printf("y = %.2f\n",y);	//1
}    		 