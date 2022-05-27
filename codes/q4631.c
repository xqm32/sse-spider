#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct book {    	  	  		 
    char ID[10];
    char name[20];
    struct book *next;
}    	  	  		 ;
typedef struct book NODE; 
struct book *create();  
void pdelete(NODE *head, char id[]);
void display(NODE *head);  
void Pfree(NODE *head);   
int main() {    	  	  		 
    struct book *head, *pnew; //1
    char id[10];//1
    head = create();  //1
    if (head == NULL)
        return 0;
    printf("创建的链表：\n");
    display(head);  //1
    printf("请输入要删除图书的编号：\n");
    scanf("%s",id);//1
    pdelete(head, id); //1
    printf("删除后的链表：\n");
    display(head); //1
    Pfree(head);//1
    return 0;
}    	  	  		 
 
struct book *create()  //2
{    	  	  		 
    NODE *head, *tail, *pnew;//1
    char ID[10],name[20];
    head = (NODE *)malloc(sizeof(NODE)); //1
    if (head == NULL) {    	  	  		 
        printf("创建失败！");
        return NULL;
    }
    head->next = NULL;
    tail = head;   
    printf("输入图书的编号和书名：\n");
    while (1)//1
    {    	  	  		 
        scanf("%s %s",ID,name);
        if (strcmp(ID,"0")==0)//1
            break;  
        pnew = (NODE *)malloc(sizeof(NODE));//1
        if (pnew == NULL)
        {    	  	  		 
            printf("创建失败！");
            return NULL;
        }
        strcpy(pnew->ID, ID); 
        strcpy(pnew->name, name);
        pnew->next = NULL;
        tail->next = pnew;//1
        tail = pnew;  //1
    }
    return head; //1
}    	  	  		 
 
void pdelete(NODE *head, char id[]) //2
{    	  	  		 
    NODE *p, *q; //1
    int j;
    p = head;
    for ( ; strcmp(p->ID,id)!=0; )//2
    {    	  	  		 
        q=p; //1
        p = p->next; //1
        if (p == NULL)//1
        {printf("不存在！");
        return;}
    }
    q->next=p->next; //1
    free(p);  //1
}    	  	  		 
void display(NODE *head) //2
{    	  	  		 
    NODE *p; //1
    for (p = head->next; p!= NULL; p = p->next) //2
        printf("%s,%s\n", p->ID, p->name); //1
}    	  	  		 
 
void Pfree(NODE *head)//2
{    	  	  		 
    NODE *p, *q; //1
    p = head;
    while (p->next != NULL) //1
    {    	  	  		 
        q = p->next;
        p->next = q->next;//1
        free(q);//1
    }
    free(p);
}    	  	  		 