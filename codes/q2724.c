#include <stdio.h>
#include <string.h>
#define MAX 100   //2;
struct telephone
{	  	   	   
    char name[10];
    char telno[20];
}	  	   	   ;    //2
void search(struct telephone b[], char *x, int n);

void main()
{	  	   	   
    struct telephone s[MAX];
    int i=0;
    char na[20],tel[20];
    while(1)
    {	  	   	   
        printf("输入姓名：");
        gets(na);
        if(strcmp(na,"#")==0)   //1
            break;
            printf("输入电话号码：");
            gets(tel);
            strcpy(s[i].name,na);
            strcpy(s[i].telno,tel);   // 1
            i++;
    }
    printf("查找的姓名：");
    gets(na);
    search(s,na,i);
}	  	   	   
void search(struct telephone b[],char *x,int n)
{	  	   	   
    int i=0;
    while(strcmp(b[i].name,x)!=0&&i<n)
    i++;
    if(i<n)
    printf("电话号码是：%s\n",b[i].telno);  //1
    else
    printf("没有找到！\n");
}	  	   	   