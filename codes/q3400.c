#include <stdio.h>
#define N 30
float Average(int score[],int n);   //1
int main()
{ 	   	  	 
    int score[N];
    float aver;
    int n,i,counter=0;
    scanf("%d",&n);//1
    for(i=0;i<n;i++)     
    { 	   	  	 
        scanf("%d",&score[i]);   //1
     }
     aver=Average(score,n);    //1
     printf("Average score is %10.2f\n",aver);//1
     for(i=0;i<n;i++)
     { 	   	  	 
         if(score[i]>aver)counter++;    //1
     }
     printf("The number of students in more than average %d\n",counter);
     return 0;
} 	   	  	 
float Average(int score[],int n)
{ 	   	  	 
    int i;
    int sum=0;   //1
    for(i=0;i<n;i++)    
    { 	   	  	 
        sum+=score[i];    //1
    }
    return (float)sum/n;    //1
} 	   	  	 
