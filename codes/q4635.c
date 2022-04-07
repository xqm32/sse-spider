#include <stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Student
{    	  	  
    int ID;
    char name[10];
    float score;
    struct Student *pNextNode;
}    	  	  Student, *PStudent;
 
Student *ByeNode(int _ID, char _name[], float _score)
{    	  	  
    Student *pNewNode = (Student *)malloc(sizeof(struct Student));
    if (NULL != pNewNode)
    {    	  	  
        pNewNode->ID = _ID;
        strcpy(pNewNode->name , _name);
        pNewNode->score = _score;
        pNewNode->pNextNode = NULL;
    }
    return pNewNode;
}    	  	  
 
Student *InsertTail(Student *pHead, int _ID, char _name[], float _score)
{    	  	  
    Student *pNode = NULL;
    Student *pNewNode = NULL;
    //assert(pHead);
    if (NULL == (pHead))
    {    	  	  
        pHead = ByeNode(_ID,_name,_score);
    }
    else
    {    	  	  
        pNode = pHead;
        while (NULL != pNode->pNextNode)
        {    	  	  
            pNode = pNode->pNextNode;
        }
        pNewNode = ByeNode(_ID, _name, _score);
        pNode->pNextNode = pNewNode;
    }
    return pHead;
}    	  	  
 
void SortList(PStudent pHead)
{    	  	  
    int IDTemp;
    char nameTemp[10];
    float scoreTemp;
    int flag = 0;
    PStudent pTailNode = NULL;
 
    if (NULL == pHead)
    {    	  	  
        return;
    }
    else
    {    	  	  
        flag = 0;
        pTailNode = NULL;
        while (pTailNode != pHead)
        {    	  	  
            PStudent pPreNode = pHead;
            while (pPreNode->pNextNode != pTailNode)
            {    	  	  
                PStudent pCurNode = pPreNode->pNextNode;
                if (pPreNode->score < pCurNode->score)
                {    	  	  
                    IDTemp = pPreNode->ID;
                    strcpy(nameTemp , pPreNode->name);
                    scoreTemp = pPreNode->score;
 
                    pPreNode->ID = pCurNode->ID;
                    strcpy(pPreNode->name , pCurNode->name);
                    pPreNode->score = pCurNode->score;
 
                    pCurNode->ID = IDTemp;
                    strcpy(pCurNode->name, nameTemp);
                    pCurNode->score = scoreTemp;
 
                    flag = 1;
                }
                pPreNode = pPreNode->pNextNode;
            }
            //对冒泡的优化，只要有一趟比较没有发生结点交换，说明冒泡完成，就可以退出冒泡的代码块了
            if (0 == flag)
            {    	  	  
                break;
            }
            pTailNode = pPreNode;
        }
    }
}    	  	  
 
//从头到尾打印单链表
void PrintList(Student *pHead)
{    	  	  
    Student *tempPnode = NULL;
    tempPnode = pHead;
    if (NULL != pHead)
    {    	  	  
        while (tempPnode != NULL)
        {    	  	  
            printf("%d  %s  %.2f\n", tempPnode->ID, tempPnode->name, tempPnode->score);
            tempPnode = tempPnode->pNextNode;
        }
    }
}    	  	  
void Pfree(Student *head) {    	  	  
    Student *p, *q;
    p = head;
    while (p->pNextNode != NULL) {    	  	  
        q = p->pNextNode;
        p->pNextNode = q->pNextNode;
        free(q);
    }
    free(p);
}    	  	  
 
 
int main(void)
{    	  	  
    Student *pList1 = NULL;
    int i = 0;
    int tempID = 0;
    char tempname[10];
    int tempscore[5];
    int j = 0;
    int sum = 0;
    float score;
    int n;//排名
    printf("input number of person:\n");
    scanf("%d",&n);
    printf("Please input user ID and name:\n");
    for (i = 1; i <=n; i++)
    {    	  	  
        printf("Input ID and name:\n");
        scanf("%d %s", &tempID, tempname);
        printf("Input 5 scores:\n");
        for (j = 0; j < 5; j++)
        {    	  	  
            scanf("%d", &tempscore[j]);
        }
        for (j = 0; j < 5; j++)
        {    	  	  
            sum = sum + tempscore[j];
        }
 
        score = (float)sum / 5;
 
        pList1=InsertTail(pList1, tempID, tempname, score);
        sum = 0;
    }
    SortList(pList1);
    printf("print the sorted list:\n");
    PrintList(pList1);
    Pfree(pList1);
    return 0;
}    	  	  