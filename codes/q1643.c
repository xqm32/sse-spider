#include  <stdio.h>
#include  <string.h>
#define NUM_ELECTORATE 10
#define NUM_CANDIDATE 3
struct candidate
{	   		   	 	 
    char  name[20];
    int   count;
}	   		   	 	  candidate[3] = {"li", 0, "zhang", 0, "wang", 0};
int main()
{	   		   	 	 
    int  i, j, flag = 1, wrong = 0;
    char  name[20];
    for (i = 1; i <= NUM_ELECTORATE; i++)
    {	   		   	 	 
        printf("Input vote %d:", i);
        scanf("%s", name);
        strlwr(name);	 	/* 将name中的字符全部变成小写字母 */
        flag = 1;
        for (j = 0; j < NUM_CANDIDATE; j++)
        {	   		   	 	 
            if (strcmp(name, candidate[j].name) == 0)
            {	   		   	 	 
                candidate[j].count++;
                flag = 0;
            }
        }
        if (flag)
        {	   		   	 	 
            wrong++;  /* 废票计数 */
            flag = 0;
        }
    }
    printf("Election results:\n");
    for (i = 0; i < NUM_CANDIDATE; i++)
    {	   		   	 	 
        printf("%8s:%d\n", candidate[i].name, candidate[i].count);
    }
    printf("Wrong election:%d\n", wrong);
    return 0;
}	   		   	 	 