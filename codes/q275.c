#include <stdio.h>
#define N 40
int GetAboveAver(int score[], int n);
void main()
{     		 
	int score[N], m, n;	
	n = -1;   //1      
	do{     		 
		n++;
		scanf("%d", &score[n]);//1
	}while (score[n] >= 0);   //e2
	m = GetAboveAver(score, n);   //2
	printf("Students of above average is %d\n", m);
}     		 
int GetAboveAver(int score[], int n)
{     		 
	int   i, sum,  aver,count;
	count = 0;//1
	sum = 0;//1		
	for (i=0; i<n; i++)//1
	{     		 
		sum += score[i];//2
	}
	aver=sum/n;//1
	for (i=0; i<n; i++)//1
	{     		 
		if (score[i] >= aver)//2
			count++;//1
	}
	return count;//1
}     		 