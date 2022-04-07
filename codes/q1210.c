#include <stdio.h>

int FindMax(int num[], int n, int *pMaxPos);

main()
{	    	 	   
	int num[10], maxValue, maxPos, minValue, minPos, i;	

	printf("Input 10 numbers:\n ");
	for (i=0; i<10; i++)
	{	    	 	   
		scanf("%d", &num[i]);                  
	}                        
	maxValue = FindMax(num, 10, &maxPos);  
	printf("Max=%d, Position=%d\n",maxValue, maxPos);
}	    	 	   
int FindMax(int num[], int n, int *pMaxPos)  
{	    	 	   
	int i, max;
	
	max = num[0];				
	*pMaxPos = 0;
	for (i = 1; i < n; i++)
	{	    	 	   
		if (num[i] > max)
		{	    	 	   
			max = num[i];
			*pMaxPos = i;
		}
	} 	
	return max;
}	    	 	   
