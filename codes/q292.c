#include <stdio.h>
#define N 40
int Average(int score[],int n)
{      	  
    int i,sum=0;
    for(i=0;i<n;i++)
    {      	  
        sum=sum+score[i];  //1
    }
    return sum/n;//1
}      	  
main()
{      	  
    int score[N],m;
    int i=-1;
    do{      	  
        i++;
        printf("Input score:");
        scanf("%d",&score[i]);
    }while(score[i]>=0);//e2
    printf("Total students are %d\n",i);//1
    m=Average(score,i);//2
    printf("Average score is %d\n",m);//1
}      	  