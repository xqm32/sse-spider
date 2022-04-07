#include  <stdio.h>
#define ARRSIZE 10   //去掉末尾的; 

void  MaxMinExchang(int a[], int n)
{	     	  		  
	int  maxValue=a[0], minValue=a[0], maxPos=0, minPos=0;
	int  i, temp;

	for (i=1; i<n; i++)
	{	     	  		  
		if (a[i] > maxValue)
		{	     	  		  
				maxValue = a[i];
            	maxPos = i;
		}
        else if (a[i] < minValue)
		{	     	  		  
				minValue = a[i];
            	minPos = i;
       	}
	}
	temp = a[maxPos];
	a[maxPos] = a[minPos];
	a[minPos] = temp;
	}

main()
{	     	  		  
	int a[ARRSIZE], i, n;

	printf("Input n(n<=10):");
	scanf("%d", &n) ;
	printf("Input %d Numbers:\n", n);
 	for (i=0; i<n; i++)
 	{	     	  		  
		scanf("%d", &a[i]);
 	}

	MaxMinExchang(a, n);	

	printf("After MaxMinExchange:\n");
	for (i=0; i<n; i++)
	{	     	  		  
         	printf("%4d", a[i]);
	}
	printf("\n") ;
}	     	  		  
