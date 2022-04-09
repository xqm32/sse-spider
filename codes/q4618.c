#include <stdio.h>
#include <stdlib.h>
#define N 10
#define M 5
typedef struct Player  
{   int id;
    char name[10];
    float score;
}    	  	 	  PLAYER;
void main()          
{   PLAYER users[N];
    int i,j;
    float m,s;
    FILE *fp;         
    //输入评委打分
    printf("Please input user's score:\n");
    for(i=0;i<N;i++)   
    {  printf("Input id and name:");
      scanf("%d%s",&users[i].id,users[i].name);
        printf("Input %d scores:",M);
        for(j=0,s=0;j<M;j++)  
        {   scanf("%f",&m);
            s+=m;
        }
        users[i].score=s/M;  
}    	  	 	  
    //排序
    for(i=0;i<N-1;i++)       
        for(j=i;j<N;j++)       
         if(users[i].score<users[j].score)
            {   PLAYER t;
                t=users[i];
                users[i]=users[j];
                users[j]=t;
            }
    //输出前三名到文件
    fp=fopen("result.txt","w");   
    if(fp==NULL) 
    {    	  	 	  
        printf("error!\n");
        exit(0);
    }
    for(i=0;i<3;i++)  
    {       fprintf(fp,"No.%d:%d %s %.2f\n",i+1,users[i].id,users[i].name,users[i].score);
    }
    fclose(fp);  
}    	  	 	  