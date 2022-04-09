#include <stdio.h>
#include <string.h>
#define N 3 //增加程序的可扩展性
struct student
{		   	       
    char name[20];
    char num[30];
    char place[20];
    char id[20];
    int age;
    char address[100];
    char sex;
    char phone[15];
}		   	        stu[N];
void input(struct student stu[]);
void print(struct student stu[]);
void search(struct student stu[], char name[]);
void main()
{		   	       
    char name[20];
    input(stu);
    print(stu);
    printf("\n请输入想要查找的学生姓名: ");
    scanf("%s", name);
    search(stu, name);
}		   	       
void input(struct student stu[])
{		   	       
    int i;
    for (i = 0; i < N; i++)
    {		   	       
        printf("请输入第%d个学生的信息:\n", i + 1);
        printf("姓名:\t");
        scanf("%s", stu[i].name);
        printf("学号:\t");
        scanf("%s", stu[i].num);
        printf("籍贯:\t");
        scanf("%s", stu[i].place);
        printf("身份证号:\t");
        scanf("%s", stu[i].id);
        printf("年龄:\t");
        scanf("%d", &stu[i].age);
        printf("家庭住址:\t");
        scanf("%s", stu[i].address);

        printf("性别（M/F）:\t");
        scanf(" %c", &stu[i].sex);
        printf("电话:\t");
        scanf("%s", stu[i].phone);

    }
}		   	       
void print(struct student stu[])
{		   	       
    int i;
    printf("姓名学号 籍贯 身份证号 年龄地址 性别电话\n");
    for (i = 0; i < N; i++)
        printf("%-8s%-12s%-10s%-20s%-4d%-10s%-3c%-10s\n", stu[i].name,
               stu[i].num, stu[i].place, stu[i].id, stu[i].age, stu[i].address, stu[i].sex,
               stu[i].phone);
}		   	       
void search(struct student stu[], char name[])
{		   	       

    int i, flag = 0;
    for (i = 0; i < N; i++)
        if (strcmp(stu[i].name, name) == 0)
        {		   	       
            printf("%-8s%-12s%-10s%-20s%-4d%-10s%-3c%-10s\n", stu[i].name,
                   stu[i].num, stu[i].place, stu[i].id, stu[i].age, stu[i].address, stu[i].sex,
                   stu[i].phone);
            flag = 1;
        }
    if (flag == 0)
        printf("没有该学生的信息！\n\n");
}		   	       