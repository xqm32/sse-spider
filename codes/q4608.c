#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct book
{    	  	     	 
 char name_of_book[100];
 char author[25];
}    	  	     	 ;
void input(struct book a[20],int n);
int Total(struct book a[],int n, char name[20]);
void writetoFile(struct book b[],int n);
int main()
{    	  	     	 
    struct book b[20];
    int n,i,count;
    char name[25];
    printf("请输入书的数量：\n");
    scanf("%d",&n);
    input(b,n);
    printf("请输入作者的姓名并统计他编写书的数量:\n");
    getchar();
    gets(name);
    count=Total(b,n,name);
    printf("%s作者编写了%d本书\n",name,count);
    writetoFile(b,n);
    return 0;
}    	  	     	 
 
void input(struct book a[20],int n)
{    	  	     	 
    int i;
    for(i=0;i<n;i++)
      {printf("Please input %d name_of_book and author:\n",i+1);
        scanf("%s %s",a[i].name_of_book,a[i].author);
 
      }
}    	  	     	 
int Total(struct book a[],int n, char name[20])
{ int i,count=0;
  for(i=0;i<n;i++)
   if(strcmp(a[i].author,name)==0)  count++;
   return count;
}    	  	     	 
void writetoFile(struct book b[],int n)
{    	  	     	 
  int i;
  FILE *fp=fopen("a.txt","w+");
  for(i=0;i<n;i++)
    fprintf(fp,"NO.%d %s %s",i+1,b[i].name_of_book,b[i].author);
}    	  	     	 