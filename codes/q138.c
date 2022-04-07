#include <stdio.h>
long Fact(int n)	
{  		 	 
	int i;
	long result=1;
	for(i=2;i<=n;i++)
	{  		 	 
		result=result*i;	//1
	}
	return result;
}  		 	 
main()
{  		 	 
	int n,i;
	long sum=0;
	printf("Input n(n>0):");	//1
	scanf("%d",&n);
	for(i=1;i<=n;i++)	//1
	{  		 	 
		sum=sum+Fact(i);	//1
	}
	printf("sum = %ld\n",sum);	//1
}  		 	 