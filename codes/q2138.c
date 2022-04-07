#include <stdio.h>
main()
{	 	 	     	   	 
	int a[10],b[9];
	int i;
	for(i=0;i<10;i++)  //2
	{	 	 	     	   	 
		scanf("%d",&a[i]);  //2
	}
	for(i=0;i<9;i++)  //2
	{	 	 	     	   	 
		b[i]=a[i+1]+a[i];  //2
	}
	for(i=0;i<9;i++)  //2
	{	 	 	     	   	 
		printf("%4d",b[i]);  //2
	}
	printf("\n");
}	 	 	     	   	 