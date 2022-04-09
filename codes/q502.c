#include <stdio.h>

#define N 3

struct Person
{	   	 	 	   
    char name[16];
    int count;
}	   	 	 	   ;

void Input(struct Person ld[], int n);  //输入n个候选人的基本信息
void Vote(struct Person ld[], int n);   //对n个候选人进行投票
void Output(struct Person ld[], int n); //输出n个候选人的基本信息

int main(int argc, char *argv[])
{	   	 	 	   
    struct Person leader[N];

    Input(leader, N);
    Vote(leader, N);
    Output(leader, N);

    return 0;
}	   	 	 	   

void Input(struct Person ld[], int n)
{	   	 	 	   
    int i;

    printf("输入%d个候选人的基本信息：姓名\n", n);
    for (i = 0; i < n; i++)
        scanf("%s", ld[i].name);
}	   	 	 	   

void Vote(struct Person ld[], int n)
{	   	 	 	   
    int m, i, j; //m表示参加投票的人数
    char ename[16];

    printf("输入参加投票的人数:");
    scanf("%d", &m);
    printf("输入%d个参加投票人的投票情况\n", m);
    for (i = 0; i < m; i++)
    {	   	 	 	   
        ld[i].count = 0;
    }

    for (i = 0; i < m; i++)
    {	   	 	 	   
        scanf("%s", ename);
        for (j = 0; j < n; j++)
            if (strcmp(ld[j].name, ename) == 0)
                ld[j].count++;
    }
}	   	 	 	   

void Output(struct Person ld[], int n)
{	   	 	 	   
    int i;

    printf("输出%d个候选人的基本信息：姓名，票数\n", n);
    for (i = 0; i < n; i++)
        printf("%s %d\n", ld[i].name, ld[i].count);
}	   	 	 	   

