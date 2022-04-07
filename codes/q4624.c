#include <stdio.h>
#include <stdlib.h>
 
struct stu
{    	  	 	   
    char ID[12];
    char name[20];
    int c1;
    int c2;
    int c3;
    struct stu * next;
}    	  	 	   ;
 
struct stu * Append(struct stu *);//增加
struct stu * Start();//初始赋值
void DisLink(struct stu *);//显示
void Sort(struct stu *);//排序
void DeleteMemory(struct stu *);//释放
 
 
 
struct stu * Start( )
{    	  	 	   
    struct stu * head = NULL;
    int flag = 1, a;
     
    while (flag)
    {    	  	 	   
        printf("1  增加数据\n");//1
        printf("2  退出\n");//1
        printf("选择：");
        scanf(" %d", &a);//1
        switch (a)
        {    	  	 	   
        case 1:
            head = Append(head);//1
            break;
        case 2:
            flag = 0;
            break;
        default:
            printf("请输入有效选择！\n");//1
        }
    }
    return head;
}    	  	 	   
void DisLink( struct stu * head )
{    	  	 	   
    struct stu * p = head;
    int j = 1;
    printf("序号\t学号\t名字 \t语文\t数学\t外语\t总分\n");
    while (p != NULL)//1
    {    	  	 	   
        printf("%d\t%s\t%s\t%d\t%d\t%d\t%d\n", j, p->ID, p->name, p->c1, p->c2, p->c3, p->c1 + p->c2 + p->c3);//1
        p = p->next;//1
        j++;
    }
}    	  	 	   
 
struct stu * Append (struct stu * head)
{    	  	 	   
    struct stu *p = NULL;
    struct stu *pr = head;
    p = (struct stu *)malloc(sizeof(struct stu));//1
    if (p == NULL)//1
    {    	  	 	   
        printf("No enough memory to alloc");
        exit(0);
    }
    if (head == NULL)//1
    {    	  	 	   
        head = p;//1
    }
    else
    {    	  	 	   
        while (pr->next != NULL)//1
        {    	  	 	   
            pr = pr->next;//1
        }
        pr->next = p;//1
    }
    pr = p;
    printf("请输入学号：");
    scanf(" %s", &pr->ID);//1
    printf("请输入名字：");
    scanf(" %s", &pr->name);//1
    printf("请依次输入语文，数学，外语成绩：");
    scanf(" %d%d%d", &pr->c1, &pr->c2, &pr->c3);//1
    pr->next = NULL;
    return head;
}    	  	 	   
 
void Sort(struct stu * head)
{    	  	 	   
    struct stu *pr = head, *p = head, temp1;
    int i = 1, j, k;
    while (p->next != NULL)//1
    {    	  	 	   
        p = p->next;//1
        i++;
    }
    p = head;
    for (j = 1; j<i; j++)//1
    {    	  	 	   
        p = p->next;//1
        for (k = 0; k<(i - j); k++)//1
        {    	  	 	   
            if ((pr->c1 + pr->c2 + pr->c3) <(p->c1 + p->c2 + p->c3) )//1
            {    	  	 	   
                temp1 = *pr;//1
                temp1.next = p->next;//1
                *pr = *p;//1
                *p = temp1;//1
                pr->next = p;//1
            }
            p = p->next;
            pr = pr->next;
        }
        p = head;
        pr = head;
    }
}    	  	 	   
 
void DeleteMemory(struct stu * head)
{    	  	 	   
    struct stu *p = head, *pr = NULL;
    while (p != NULL)//1
    {    	  	 	   
        pr = p;//1
        p = p->next;//1
        free(pr);//1
    }
}    	  	 	   
 
int main()
{    	  	 	   
    struct stu * head = NULL;//1
    head = Start();
    DisLink(head);
 
    printf("排序后：\n");
    Sort(head);
    DisLink(head);
 
    DeleteMemory(head);
     
    return 0;
}    	  	 	   