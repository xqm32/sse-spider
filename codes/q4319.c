#include <stdio.h>
typedef struct mes
{		   	    
    int sno;
    char sname[20];
    float grade1;
    float grade2;
    float sum;
    float avg;
}		   	     STUDENT;  //定义结构体

int main()
{		   	    
    int i, j, k;
    STUDENT temp, student [5];
    printf("请输入五位学生的信息\n");
    printf("学号\t姓名(无空格)\t数学\t计算机\n");
    for (i = 0; i < 5; i++)
    {		   	    
        scanf("%d %s %f %f", &student[i].sno, student[i].sname, &student[i].grade1, &student[i].grade2);
        student[i].sum = student[
                             i].grade1 + student[i].grade2;
        student[i].avg = student[i].sum / 2;
    }
    for (i = 0; i < 4; i++)
    {		   	    
        k = i;

        for (j = i + 1; j < 5; j++)
            if (student[k].sum < student[j].sum)
                k = j;

        temp = student[k];
        student[k] = student[i];
        student[i] = temp;

    }
    printf("学生成绩的排序结果为:\n");
    for (i = 0; i < 5; i++)
    {		   	    
        printf("学号:%d,姓名:%s,数学成绩:%3.1f,计算机成绩:%3.1f:%3.1f,分 :%3.1f\n", student[i].sno, student[i].sname, student[i].grade1
               , student[i].grade2, student[i].avg, student[i].sum);
    }  //显示五位同学的信息

    return 0;
}		   	    