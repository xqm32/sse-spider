﻿#include <stdio.h>
int FindMax(int a[],int n)  
{     	   
  int Max,j;
  Max=0;             //1
   for(j=1;j<n;j++) //1
  {     	   
     if(a[j]>a[Max])//1
     {     	   
         Max=j;    //1    
     }
   }
 return a[Max]; 
}     	   
main()
{     	   
  int a[10];
  int i;
  int Max;
  for(i=0;i<10;i++)
   {     	   
     scanf("%d",&a[i]); //1
   }
   Max=FindMax(a,10);  //1
   printf("max=%d\n",Max);
}     	   