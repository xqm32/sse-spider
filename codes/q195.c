#include<stdio.h>
long fun(int m);
main()
{  	 	    	 
	int i,n;
	long sum=0,p;			//1
	
	printf("Input n:\n");
	scanf("%d",&n);			//1

	for(i=1;i<=2*n-1;i+=2)		//2
	{  	 	    	 
		p=fun(i);		//2
		sum=sum+p;		//1
	}
	printf("sum=%ld\n",sum);	//1

}  	 	    	 
long fun(int m)
{  	 	    	 
	long p=1;			//1
	int i;

	for(i=1;i<=m;i++)		//2
	{  	 	    	 
		p=p*i;			//1
	}

	return p;			//2
}  	 	    	 