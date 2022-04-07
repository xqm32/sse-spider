#include<stdio.h>
#include <math.h>
int main()
   {	   
   	int n,i,j,a[100],flag=0;
   	int sum=0;                   //1
   		scanf("%d",&n);         //1
   		for(i=0;i<n;i++)          //1
   		scanf("%d",&a[i]);         //1
   		for(i=0;i<n;i++)
   		{	   
   			if(a[i]==1)	continue;
   			flag=0;
   			for(j=2;j<=sqrt(a[i]);j++)//1
   			{	   
   				if(a[i]%j==0)
   				{flag=1;break;}
   			}
   			if(flag==0)	sum+=a[i]; //1
   		}
   	printf("%d\n",sum);           //1
   	return 0;
  }