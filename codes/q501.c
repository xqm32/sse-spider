#include <stdio.h>

#define N 4

struct Student1
{	   	 	 	     
    unsigned int sno;
    char sname[16];
    int score;
}	   	 	 	     ;

int main(int argc, char *argv[])
{	   	 	 	     
    struct Student1 stu[N];
    int i, j;
    struct Student1 temp;


    for (i = 0; i < N; i++)
    {	   	 	 	     
        printf("输入第%d个学生的信息：学号、姓名、成绩\n", i + 1);
        scanf("%d %s %d", &stu[i].sno, stu[i].sname, &stu[i].score);
    }

    for (i = 0; i < N - 1; i++)
    {	   	 	 	     
        for (j = 0; j < N - i - 1; j++)
        {	   	 	 	     
            if (stu[j].score < stu[j + 1].score)
            {	   	 	 	     
                temp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = temp;
            }
        }
    }

    printf("排序后学生的信息为:\n");
    for (i = 0; i < N; i++)
    {	   	 	 	     
        printf("%d %s %d\n", stu[i].sno, stu[i].sname, stu[i].score);
    }

    return 0;
}	   	 	 	     

