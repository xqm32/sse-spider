#include<stdio.h>
#include<string.h>
#define N 5
/*定义结构体aa存储姓名和电话号码*/
struct aa  //1
{    	  	 	 	 	 
    char name[15];  
    char tel[15];   
}    	  	 	 	 	 ;
 
void readin(struct aa *a,int n)/*自定义函数readin，用来存储姓名及电话号码*/
{    	  	 	 	 	 
    int i=0;
    printf("请输入姓名 电话：");
    while(i<n)         
    {    	  	 	 	 	 
        scanf("%s",a[i].name);//1   
        scanf("%s",a[i].tel);
        i++;
    }
     
}    	  	 	 	 	 
int search(struct aa *a,char *x,int n)//1
{    	  	 	 	 	 
    int i;
    i=0;
    while(i<n)    //1
    {  
        /*查找与输入姓名相匹配的记录*/
        if(strcmp(a[i].name,x)==0)  //1
            return i;//1
         i++;
     
    }
    return -1; //1
}    	  	 	 	 	 
 
void main()
{/*定义结构体数组s*/
    struct aa s[N];  //1
    char name[15];
    int find;
    /*调用函数readin*/
    readin(s,N);
    printf("输入要查找的姓名:");
    scanf("%s",name);/*输入要查找的姓名*/
    find=search(s,name,N);/*调用函数search*/  //1
    if(find!=-1)//1
        {   /*输出查找到的姓名所对应的电话号码*/
            printf("姓名:%s  电话:%s\n",s[find].name,s[find].tel);
        }
    else
        {   /*若没查找到记录输出提示信息*/
            printf("没有找到!"); 
        }
     
}    	  	 	 	 	 