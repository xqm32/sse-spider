#include <stdio.h>
#include <stdlib.h>
#define N 30
float Average(int score[],int n);   //1
int main()
{ 	  	    	
    int score[N];
    float aver;
    int n,i,counter=0;
    scanf("%d",&n);//1
    for(i=0;i<n;i++)     //2
    { 	  	    	
        scanf("%d",&score[i]);   //1
     }
     aver=Average(score,n);    //2
     printf("Average score is %10.2f\n",aver);//1
     for(i=0;i<n;i++)
     { 	  	    	
         if(score[i]<aver)counter++;
     }
     printf("The number of students in less than average %d\n",counter);
     return 0;
} 	  	    	
float Average(int score[],int n)
{ 	  	    	
    int i;
    int sum=0;   //1
    for(i=0;i<n;i++)    //1
    { 	  	    	
        sum+=score[i];    //1
    }
    return (float)sum/n;    //1
} 	  	    	