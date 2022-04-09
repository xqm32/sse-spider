#include<stdio.h>
int main()
{	   	  	   		 
    int i, j, row = 0, max;
    int a[3][3];//1
    for (i = 0; i < 3; i++)//2
    {	   	  	   		 
        for (j = 0; j < 3; j++)//2
        {	   	  	   		 
            scanf("%d", &a[i][j]);//1
        }
    }
    max = a[0][0];//1
    for (i = 0; i < 3; i++)//2
    {	   	  	   		 
        if (max < a[i][i])//2
        {	   	  	   		 
            max = a[i][i];//1
            row = i;//1
        }
    }
    printf("max=%d ,row=%d", max, row);//1
    return 0;
}	   	  	   		 