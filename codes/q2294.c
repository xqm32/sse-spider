#include <stdio.h>
float fun(int n);
main()
{	 	 		 		 
    int n;
    printf("please input a number:");
    scanf("%d",&n);
    printf("%10.6f\n",fun(n));
}	 	 		 		 
float fun(int n)
{	 	 		 		 
    int i,j,t;
    float s=0;
    for(i=1;i<=n;i++)
    {	 	 		 		 
         t=0;
         for(j=1;j<=i;j++)
         {	 	 		 		 
             t=t+j;
         }
         s=s+1.0/t;
    }
    return s;
}	 	 		 		 