#include<stdio.h>
#include<string.h>
#define N 1000
typedef struct m
{		 		 		 	   
int a;//长度
int b;//直径
char c[10];//编号
}		 		 		 	    Infor;

int main()
{		 		 		 	   
int n,i,j,k;  //钢管数量
Infor s[N],sort1[1000],sort2[1000],find;
printf("请输入钢管数量：\n");
scanf("%d",&n);
printf("请输入钢管信息(长度、直径和编码：\n");
for(i=0; i<n; i++)
scanf("%d%d%s",&s[i].a,&s[i].b,s[i].c);
find=s[0];

for(i=1; i<n; i++)
{		 		 		 	   
    if(s[i].a<=find.a)
    find=s[i];
}		 		 		 	   
for(i=0,j=0;i<n;i++)
{		 		 		 	   
    if(s[i].a==find.a)
    {		 		 		 	   
        sort1[j]=s[i];
        j++;
    }
}		 		 		 	   


find=sort1[0];
for(i=1; i<j; i++)
{if(sort1[i].b>=find.b)
{		 		 		 	   
    find=sort1[i];
}		 		 		 	   
}		 		 		 	   
for(i=0,k=0;i<j;i++)
{		 		 		 	   
    if(sort1[i].b==find.b)
    {		 		 		 	   
        sort2[k]=sort1[i];
        k++;
    }
}		 		 		 	   
find=sort2[0];
for(i=0; i<k; i++)
{if(strcmp(sort2[i].c,find.c)>0)
{		 		 		 	   
    find=sort2[i];
}		 		 		 	   
}		 		 		 	   
printf("仓库中符合条件的那根钢管的信息是：\n");
printf("%d\t%d\t%s\n",find.a,find.b,find.c);

return 0;
}		 		 		 	   

