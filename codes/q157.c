#include  <stdio.h>
int  Search(int a[], int n, int x);
main()
{	  		 		 
	int    a[10];
	int    n=10, i, pos, x;          

	printf("Input 10 numbers:\n");
	for (i=0; i<n; i++)
	{	  		 		 
		scanf("%d", &a[i]);           //1
	}
	printf("Input x:\n");
	scanf("%d",&x);                      //1
	pos = Search(a, n, x);                //1
	if (pos != -1)                	
      {	  		 		 
		printf("Subscript of x is %d\n", pos);
	}
	else
	{	  		 		 
		   printf("Not found!\n");
	}
}	  		 		 

int  Search(int a[], int n, int x)
{	  		 		 
	int  i;

	for (i=0; i<n; i++)               
	{	  		 		 
		if (a[i] == x)             //1
  			    return i;       //1
	}
	return -1;                 //1
}	  		 		 
