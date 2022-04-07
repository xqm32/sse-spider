#include<stdio.h>
#include<string.h>
main()
{  	 	   	   
	char a[10][80],term[80];		//1
	int i,j;

	for(i=0;i<10;i++)			//1
	{  	 	   	   
		gets(a[i]);			//1
	}

	for(i=0;i<10-1;i++)			//2
	{  	 	   	   
		for(j=i+1;j<10;j++)		//2
		{  	 	   	   
			if(strcmp(a[i],a[j])>0)		//1
			{  	 	   	   
				strcpy(term,a[i]);	//1
				strcpy(a[i],a[j]);	//1
				strcpy(a[j],term);	//1
			}
		}
	}
	for(i=0;i<10;i++)			//1
	{  	 	   	   
		puts(a[i]);			//1
	}
}  	 	   	   