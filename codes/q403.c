#include <stdio.h>
#define N 5
main()
{int i,j,t,a[N];
 for(i=0;i<N;i++)
 { printf("Enter No.%2d:",i+1);
   scanf("%d",&a[i]);
 }
 for(i=0;i<N-1;i++)
   for(j=0;j<N-i-1;j++)
     if(a[j]>a[j+1])
     { t=a[j];
       a[j]=a[j+1];
       a[j+1]=t;
     }
 for(i=0;i<N;i++)
   printf("%d",a[i]);
}	   	   	 	 	   
