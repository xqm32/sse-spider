#include <stdio.h>
#include <stdlib.h>

#define LEN sizeof(struct stu)
struct stu
{		   	     
    int num;
    struct stu *next;
}		   	     ;
struct stu *create(int n);
int select(struct stu *head, int n, int m);
void main()
{		   	     
    struct stu *head;
    int m, n, last;
    printf("请输入N的值: ");
    scanf("%d", &n);
    printf("请输入m的值: ");
    scanf("%d", &m);
    head = create(n);
    last = select(head, n, m);
    printf("最后剩下同学的编号是 %d 号\n\n", last);
}		   	     
struct stu *create(int n)
{		   	     
    int i;
    struct stu *p1, *p2;
    struct stu *head = NULL;
    p2 = p1 = (struct stu*) malloc(LEN);
    for (i = 1; i <= n; i++)
    {		   	     
        if (i == 1)
            head = p1;
        else
            p2->next = p1;
        p1->num = i;
        p2 = p1;
        p1 = (struct stu*) malloc(LEN);
    }
    p2->next = head;
    return head;
}		   	     
int select(struct stu *head, int n, int m)
{		   	     
    int i, j;
    struct stu *p1 = head, *p2 = p1;
    if (n == 1 || m == 1)
        return n;
    for (i = 1; i < n; i++)
    {		   	     
        for (j = 2; j < m; j++)
            p1 = p1->next;
        p2 = p1;
        p1 = p1->next;
        p1 = p1->next;
        p2->next = p1;
    }
    return p1->num;
}		   	     