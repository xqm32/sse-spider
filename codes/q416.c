#include <stdio.h>
main()
{int i;float total=0.;
 for(i=0;i<5;i++)
   total=(total+1000.)/(1+.0063*12);
   printf("He must save %.2f at first.\n",total);
}	   	   	   
