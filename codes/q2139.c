#include "stdio.h"
main()
{	 	 	        
	int i,m,count;

	for(m=1;m<=1000;m++)    //3
	{	 	 	        
	    count=0;		//2
	    for(i=1;i<m;i++)	//3
	    {	 	 	        
		if(m%i==0)	//1
		{	 	 	        
		     count=count+i;//1
		}
	    }
	    if(count==m)	//2
	      printf("%d\n",m);//1	
	}
}	 	 	        