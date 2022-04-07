﻿#include  <stdio.h>
#include  <stdlib.h>
#include  <string.h>
#define   MAX_LEN  10                       /* 字符串最大长度 */
#define   STU_NUM 30                       /* 最多的学生人数 */
#define   COURSE_NUM 6                     /* 最多的考试科目数 */
typedef struct student
{	          
    long num;                       /* 每个学生的学号 */
    char name[MAX_LEN];             /* 每个学生的姓名 */
    float score[COURSE_NUM];        /* 每个学生COURSE_NUM门功课的成绩 */
    float sum;                           /* 每个学生的总成绩 */
    float aver;                      /* 每个学生的平均成绩 */
}	           STU;
int   Menu(void);
void  ReadScore(STU stu[], int n, int m);
void  AverSumofEveryStudent(STU stu[], int n, int m);
void  AverSumofEveryCourse(STU stu[], int n, int m);
void  SortbyScore(STU stu[], int n, int m, int (*compare)(float a, float b));
int   Ascending(float a, float b);
int   Descending(float a, float b);
void  SwapFloat(float *x, float *y);
void  SwapLong(long *x, long *y);
void  SwapChar(char x[], char y[]);
void  AsSortbyNum(STU stu[], int n, int m);
void  SortbyName(STU stu[], int n, int m);
void  SearchbyNum(STU stu[], int n, int m);
void  SearchbyName(STU stu[], int n, int m);
void  StatisticAnalysis(STU stu[], int n, int m);
void  PrintScore(STU stu[], int n, int m);
int main()
{	          
    char  ch;
    int   n = 0, m = 0;  /* 学生人数为n，课程门数为m */
    STU   stu[STU_NUM];
    printf("Input student number(n<=30):\n", STU_NUM);
    scanf("%d", &n);
    while (1)
    {	          
        ch = Menu();                        /* 显示菜单，并读取用户输入 */
        switch (ch)
        {	          
        case 1:
            printf("Input course number(m<=%d):\n", COURSE_NUM);
            scanf("%d", &m);
            ReadScore(stu, n, m);
            break;
        case 2:
            AverSumofEveryCourse(stu, n, m);
            break;
        case 3:
            AverSumofEveryStudent(stu, n, m);
            break;
        case 4:
            SortbyScore(stu, n, m, Descending);
            printf("Sort in descending order by score:\n");
            PrintScore(stu, n, m);
            break;
        case 5:
            SortbyScore(stu, n, m, Ascending);
            printf("Sort in ascending order by score:\n");
            PrintScore(stu, n, m);
            break;
        case 6:
            AsSortbyNum(stu, n, m);
            printf("Sort in ascending order by number:\n");
            PrintScore(stu, n, m);
            break;
        case 7:
            SortbyName(stu, n, m);
            printf("Sort in dictionary order by name:\n");
            PrintScore(stu, n, m);
            break;
        case 8:
            SearchbyNum(stu, n, m);
            break;
        case 9:
            SearchbyName(stu, n, m);
            break;
        case 10:
            StatisticAnalysis(stu, n, m);
            break;
        case 11:
            PrintScore(stu, n, m);
            break;
        case 0:
            printf("End of program!");
            exit(0);
        default:
            printf("Input error!\n");
        }
    }
    return 0;
}	          
/*  函数功能：显示菜单并获得用户键盘输入的选项 */
int Menu(void)
{	          
    int itemSelected;
    printf("Management for Students' scores\n");
    printf("1.Input record\n");
    printf("2.Caculate total and average score of every course\n");
    printf("3.Caculate total and average score of every student\n");
    printf("4.Sort in descending order by score\n");
    printf("5.Sort in ascending order by score\n");
    printf("6.Sort in ascending order by number\n");
    printf("7.Sort in dictionary order by name\n");
    printf("8.Search by number\n");
    printf("9.Search by name\n");
    printf("10.Statistic analysis\n");
    printf("11.List record\n");
    printf("0.Exit\n");
    printf("Please Input your choice:\n");
    scanf("%d", &itemSelected);     /* 读入用户输入 */
    return itemSelected;
}	          
/* 函数功能：输入n个学生的m门课成绩 */
void ReadScore(STU stu[], int n, int m)
{	          
    int i, j;
    printf("Input student's ID, name and score:\n");
    for (i = 0; i < n; i++)
    {	          
        scanf("%ld%s", &stu[i].num, stu[i].name);
        for (j = 0; j < m; j++)
        {	          
            scanf("%f", &stu[i].score[j]);
        }
    }
}	          
/* 函数功能：计算每个学生各门课程的总分和平均分 */
void AverSumofEveryStudent(STU stu[], int n, int m)
{	          
    int i, j;
    for (i = 0; i < n; i++)
    {	          
        stu[i].sum = 0;
        for (j = 0; j < m; j++)
        {	          
            stu[i].sum = stu[i].sum + stu[i].score[j];
        }
        stu[i].aver = m > 0 ? stu[i].sum / m : -1;
        printf("student %d: sum=%.0f,aver=%.0f\n",
               i + 1, stu[i].sum, stu[i].aver);
    }
}	          
/* 函数功能：计算每门课程的总分和平均分 */
void AverSumofEveryCourse(STU stu[], int n, int m)
{	          
    int    i, j;
    float sum[COURSE_NUM], aver[COURSE_NUM];
    for (j = 0; j < m; j++)
    {	          
        sum[j] = 0;
        for (i = 0; i < n; i++)
        {	          
            sum[j] = sum[j] + stu[i].score[j];
        }
        aver[j] = n > 0 ? sum[j] / n : -1;
        printf("course %d:sum=%.0f,aver=%.0f\n", j + 1, sum[j], aver[j]);
    }
}	          
/* 函数功能：按选择法将数组sum的元素值排序 */
void SortbyScore(STU stu[], int n, int m, int (*compare)(float a, float b))
{	          
    int  i, j, k, t;
    for (i = 0; i < n - 1; i++)
    {	          
        k = i;
        for (j = i + 1; j < n; j++)
        {	          
            if ((*compare)(stu[j].sum, stu[k].sum))  k = j;
        }
        if (k != i)
        {	          
            for (t = 0; t < m; t++)         /* 交换m门课程的成绩 */
            {	          
                SwapFloat(&stu[k].score[t], &stu[i].score[t]);
            }
            SwapFloat(&stu[k].sum, &stu[i].sum);    /* 交换总分 */
            SwapFloat(&stu[k].aver, &stu[i].aver); /* 交换平均分 */
            SwapLong(&stu[k].num, &stu[i].num);     /* 交换学号 */
            SwapChar(stu[k].name, stu[i].name);     /* 交换姓名 */
        }
    }
}	          
/* 使数据按升序排序 */
int Ascending(float a, float b)
{	          
    return a < b;     /* 这样比较决定了按升序排序，如果a<b，则交换 */
}	          
/* 使数据按降序排序 */
int Descending(float a, float b)
{	          
    return a > b;    /* 这样比较决定了按降序排序，如果a>b，则交换 */
}	          
/* 交换两个单精度浮点型数据 */
void  SwapFloat(float *x, float *y)
{	          
    float  temp;
    temp = *x;
    *x = *y;
    *y = temp;
}	          
/* 交换两个长整型数据 */
void  SwapLong(long *x, long *y)
{	          
    long   temp;
    temp = *x;
    *x = *y;
    *y = temp;
}	          
/* 交换两个字符串 */
void  SwapChar(char x[], char y[])
{	          
    char temp[MAX_LEN];
    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);
}	          
/* 函数功能：按选择法将数组num的元素值按从低到高排序 */
void AsSortbyNum(STU stu[], int n, int m)
{	          
    int  i, j, k, t;
    for (i = 0; i < n - 1; i++)
    {	          
        k = i;
        for (j = i + 1; j < n; j++)
        {	          
            if (stu[j].num < stu[k].num) k = j;
        }
        if (k != i)
        {	          
            for (t = 0; t < m; t++)        /* 交换m门课程的成绩 */
            {	          
                SwapFloat(&stu[k].score[t], &stu[i].score[t]);
            }
            SwapFloat(&stu[k].sum, &stu[i].sum);    /* 交换总分 */
            SwapFloat(&stu[k].aver, &stu[i].aver); /* 交换平均分 */
            SwapLong(&stu[k].num, &stu[i].num);     /* 交换学号 */
            SwapChar(stu[k].name, stu[i].name);     /* 交换姓名 */
        }
    }
}	          
/* 函数功能：交换法实现字符串按字典顺序排序 */
void SortbyName(STU stu[], int n, int m)
{	          
    int  i, j, t;
    for (i = 0; i < n - 1; i++)
    {	          
        for (j = i + 1; j < n; j++)
        {	          
            if (strcmp(stu[j].name, stu[i].name) < 0)
            {	          
                for (t = 0; t < m; t++) /* 交换m门课程的成绩 */
                {	          
                    SwapFloat(&stu[i].score[t], &stu[j].score[t]);
                }
                SwapFloat(&stu[i].sum, &stu[j].sum);    /* 交换总分 */
                SwapFloat(&stu[i].aver, &stu[j].aver); /* 交换平均分 */
                SwapLong(&stu[i].num, &stu[j].num);     /* 交换学号 */
                SwapChar(stu[i].name, stu[j].name);     /* 交换姓名 */
            }
        }
    }
}	          
/* 函数功能：按学号查找学生成绩并显示查找结果 */
void SearchbyNum(STU stu[], int n, int m)
{	          
    long  number;
    int   i, j;
    printf("Input the number you want to search:\n");
    scanf("%ld", &number);
    for (i = 0; i < n; i++)
    {	          
        if (stu[i].num == number)
        {	          
            printf("%ld\t%s\t", stu[i].num, stu[i].name);
            for (j = 0; j < m; j++)
            {	          
                printf("%.0f\t", stu[i].score[j]);
            }
            printf("%.0f\t%.0f\n", stu[i].sum, stu[i].aver);
            return;
        }
    }
    printf("Not found!\n");
}	          
/* 函数功能：按姓名的字典顺序排出成绩表 */
void SearchbyName(STU stu[], int n, int m)
{	          
    char x[MAX_LEN];
    int  i, j;
    printf("Input the name you want to search:\n");
    scanf("%s", x);
    for (i = 0; i < n; i++)
    {	          
        if (strcmp(stu[i].name, x) == 0)
        {	          
            printf("%ld\t%s\t", stu[i].num, stu[i].name);
            for (j = 0; j < m; j++)
            {	          
                printf("%.0f\t", stu[i].score[j]);
            }
            printf("%.0f\t%.0f\n", stu[i].sum, stu[i].aver);
            return;
        }
    }
    printf("Not found!\n");
}	          
/* 函数功能：统计各分数段的学生人数及所占的百分比 */
void StatisticAnalysis(STU stu[], int n, int m)
{	          
    int  i, j, total, t[6];
    for (j = 0; j < m; j++)
    {	          
        printf("For course %d:\n", j + 1);
        memset(t, 0, sizeof(t));    /* 将数组t的全部元素初始化为0 */
        for (i = 0; i < n; i++)
        {	          
            if (stu[i].score[j] >= 0 && stu[i].score[j] < 60) t[0]++;
            else if (stu[i].score[j] < 70)                    t[1]++;
            else if (stu[i].score[j] < 80)                   t[2]++;
            else if (stu[i].score[j] < 90)                   t[3]++;
            else if (stu[i].score[j] < 100)                   t[4]++;
            else if (stu[i].score[j] == 100)                t[5]++;
        }
        for (total = 0, i = 0; i <= 5; i++)
        {	          
            total = total + t[i];
        }
        for (i = 0; i <= 5; i++)
        {	          
            if (i == 0) printf("<60\t%d\t%.2f%%\n", t[i], (float)t[i] / n * 100);
            else if (i == 5) printf("%d\t%d\t%.2f%%\n",
                                        (i + 5) * 10, t[i], (float)t[i] / n * 100);
            else    printf("%d-%d\t%d\t%.2f%%\n",
                               (i + 5) * 10, (i + 5) * 10 + 9, t[i], (float)t[i] / n * 100);
        }
    }
}	          
/* 函数功能： 打印学生成绩 */
void PrintScore(STU stu[], int n, int m)
{	          
    int i, j;
    for (i = 0; i < n; i++)
    {	          
        printf("%ld\t%s\t", stu[i].num, stu[i].name);
        for (j = 0; j < m; j++)
        {	          
            printf("%.0f\t", stu[i].score[j]);
        }
        printf("%.0f\t%.0f\n", stu[i].sum, stu[i].aver);
    }
}	          