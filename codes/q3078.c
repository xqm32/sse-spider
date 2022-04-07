#include<stdio.h>
int main()
{	    	 	 	   
	int x=1,day;
	printf("Input days:\n");
	scanf("%d",&day);
    while(day>1)
	{	    	 	 	   
	x=(x+1)*2;
	day--;
	}

	printf("x=%d\n",x);
	return 0;
}	    	 	 	   