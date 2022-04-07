#include <stdio.h>
main()
{	     	   
   int i,a,sum;
   float avg;
   sum=0;
   for(i=0;i<10;i++)
   {	     	   
      printf("input a integer:");
      scanf("%d",&a);
      sum+=a;
   }
   avg=sum/10.0;
   printf("sum=%d\n",sum);
   printf("avg=%.2f\n",avg);
}	     	   