#include <stdio.h>
void ReadScore(int Score[])
{	 	   		 	   
    int i = 0;
    for (i = 0; i < 10; i++)
    {	 	   		 	   
        scanf("%d", &Score[i]);
    }
}	 	   		 	   
void MaxMin(int Score[],int *MaxNum,int *MinNum)  
{	 	   		 	   
    int i = 0, Max = Score[0], Min = Score[0];
    *MaxNum = *MinNum = 0;
    for (i = 0; i < 10; i++)
    {	 	   		 	   
        if (Score[i] > Max)
        {	 	   		 	   
            Max = Score[i];
            *MaxNum = i;
        }
        if (Score[i] < Min)
        {	 	   		 	   
            Min = Score[i];
            *MinNum = i;
        }
    }
}	 	   		 	   
int main()
{	 	   		 	   
    int Score[10] = {0};
    int MaxNum = 0, MinNum = 0;
    ReadScore (Score);
    MaxMin (Score, &MaxNum, &MinNum);
    printf("最高分为第%d个评委，最低分为第%d个评委\n", MaxNum + 1, MinNum + 1);
    return 0;
}	 	   		 	   