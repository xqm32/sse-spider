#include <stdio.h>
#define  M   20
#define  N   11
int Mode(int answer[], int n);
main()
{	 	     
	int  i, feedback[M];//1
	int modeval;
	printf("Input 20 feedbacks:\n");
	for (i=0; i<M; i++)//2
	{	 	     
		scanf("%d", &feedback[i]);//1
	}
	modeval=Mode(feedback, M);//2

    printf("Mode value=%d\n", modeval);//1
}	 	     

int Mode(int answer[], int n) //1
{	 	     
	int  i, grade, max = 0, modeValue = 0, count[N] = {0};//1	
	for (i=0; i<n; i++)//2
	{	 	     
		count[answer[i]]++;//2
	}	
       for (grade=1; grade<=N-1; grade++)//2
	{ 
		if (count[grade] > max)//2
		{	 	     
			max = count[grade];//1
                        modeValue = grade;//1
		}
	}
      return modeValue;//1
}	 	     