#include<stdio.h>

#define MAX_TERM 80

typedef struct juzhen
{   	 	     
    int row;        //行
    int col;        //列
    int value;        //元素值
}   	 	     ;


struct juzhen a[MAX_TERM];        //存放矩阵中元素数值不为零的元素
struct juzhen b[MAX_TERM];        //转置后的矩阵


void show(struct juzhen a[],int count_a)            //显示稀疏矩阵方法二
{   	 	     
    int i;
    printf(" i row col val\n");
    for(i = 1;i < count_a + 1;i++)
    {   	 	     
        printf(" %d|  %d   %d   %d\n",i,a[i].row,a[i].col,a[i].value);
    }
}   	 	     


void zhuanzhi(struct juzhen a[],struct juzhen b[])            //转置矩阵方法一
{   	 	     
    int i,j;
    int count_b = 1;        //b的当前元素下标
    b[0].row = a[0].col;
    b[0].col = a[0].row;
    b[0].value = a[0].value;
    for(i = 0;i < a[0].col;i++)
    {   	 	     
        for(j = 1;j <= a[0].value;j++)
        {   	 	     
            if(a[j].col == i)
            {   	 	     
                b[count_b].row = a[j].col;
                b[count_b].col = a[j].row;
                b[count_b].value = a[j].value;
                count_b++;
            }
        }
    }
}   	 	     



void init(struct juzhen a[],int rows, int cols,int count)            //初始化稀疏矩阵
{   	 	     
    int row,col,value,i;
    for ( i = 1; i < count+1; ++i)
    {   	 	     
         printf("please input the row,col and value\n");
         scanf("%d,%d,%d",&row,&col,&value);
         a[i].row = row;
         a[i].col = col;
         a[i].value = value;
    }
    a[0].row = rows;
    a[0].col = cols;
    a[0].value = count;
}   	 	     

int main(void)
{   	 	     
    int count_a,rows,cols;
    printf("please input the number of rows,cols and values\n");
    scanf("%d,%d,%d",&rows,&cols,&count_a);
    init(a,rows,cols,count_a);
    show(a,count_a);
    printf("\n");
    zhuanzhi(a,b);
    show(b,count_a);
}   	 	     