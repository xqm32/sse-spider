#include <stdio.h>
main()
{  	 	 
	int a[10],i,max;
	for(i=0;i<10;i++) 
	{  	 	 
		scanf("%d",&a[i]);  //2
	}
	max=a[0];  //2
	for(i=1;i<10;i++)  //2
	{  	 	 
		if(max<a[i])  //2
		{  	 	 
			max=a[i];  //2
		}
	}
	printf("max=%d\n",max);  //2
}  	 	 