#include <stdio.h>
#define N 40
int ReadScore(int income[], long num[]);
int LinSearch(long num[], long x, int n);
int main()
{ 	   	    
	int income[N], n, pos;
	long num[N], x;
	n = ReadScore(income, num);
	printf("Total number is %d\n", n);
	printf("Input the searching ID:");
	scanf("%ld", &x);
	pos = LinSearch(num, x, n);
	if (pos != -1)
	{ 	   	    
		printf("income = %d\n", income[pos]);
	}
	else
        { 	   	    
		printf("Not found!\n");
	}
	return 0;
} 	   	    

int ReadScore(int income[], long num[])
{ 	   	    
	int i = -1;         
	do
	{ 	   	    
		i++;
		printf("Input person's ID and income:");
		scanf("%ld%d", &num[i], &income[i]);
	} while (num[i] >0 && income[i] >= 0);
	return i;
} 	   	    

int LinSearch(long num[], long x, int n)
{ 	   	    
	int  i;
	for (i=0; i<n; i++)
	{ 	   	    
		if (num[i] == x)  return (i);
	}
	return (-1);
} 	   	    