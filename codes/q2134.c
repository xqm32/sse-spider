#include <stdio.h>
main()
{	 	 	   	  	 	 
	int i,j,max[3]={0,0,0},Max,a[3][4]={{1,2,3,4},{9,8,7,6},{10,-1,-4,4}};
	for(i=0;i<3;i++) //2
	{	 	 	   	  	 	 
		for(j=1;j<4;j++) //2
		{	 	 	   	  	 	 
			if(a[i][0]<a[i][j]) //2
			{	 	 	   	  	 	 
				a[i][0]=a[i][j]; //2
			}
			max[i]=a[i][0]; //2
		}
	}
	for(i=1;i<3;i++)
	{	 	 	   	  	 	 
		if(max[0]<max[i]) //2
		{	 	 	   	  	 	 
			max[0]=max[i]; //2
		}
	}
	Max=max[0];
	printf("max=%d\n",Max); //2
}	 	 	   	  	 	 