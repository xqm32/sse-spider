#include <stdio.h>
main()
{	         
   int a,i,max;
   printf("input the number!\n");
   scanf("%d",&a);
   max=a;
   for(i=1;i<10;i++)
   {	         
      printf("input the number!\n");
      scanf("%d",&a);
      if(a>max)
      max = a;
   }
   printf("max integer is %d!\n",max);	     
	
}	         