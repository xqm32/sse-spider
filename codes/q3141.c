#include  <stdio.h>
#include  <stdlib.h>
#include  <string.h>
#define   MAX_LEN  10                       /* 字符串最大长度 */
#define   STU_NUM 30                       /* 最多的学生人数 */
#define   COURSE_NUM 6                     /* 最多的考试科目数 */
int   Menu(void);
void  ReadScore(long num[], char name[][MAX_LEN],
                float score[][COURSE_NUM], int n, int m);
void AverSumofEveryStudent(float score[][COURSE_NUM], int n, int m,
                           float  sum[STU_NUM], float aver[STU_NUM]);
void AverSumofEveryCourse(float score[][COURSE_NUM], int n, int m);
void  SortbyScore(long num[], char name[][MAX_LEN],
                  float score[][COURSE_NUM], float  sum[], float aver[],
                  int n, int m, int (*compare)(float a, float b));
int   Ascending(float a, float b);
int   Descending(float a, float b);
void  SwapFloat(float *x, float *y);
void  SwapLong(long *x, long *y);
void  SwapChar(char x[], char y[]);
void  AsSortbyNum(long num[], char name[][MAX_LEN],
                  float score[][COURSE_NUM], float  sum[], float aver[],
                  int n, int m);
void  SortbyName(long num[], char name[][MAX_LEN],
                 float score[][COURSE_NUM], float  sum[], float aver[],
                 int n, int m);
void  SearchbyNum(long num[], char name[][MAX_LEN],
                  float score[][COURSE_NUM], float  sum[], float aver[],
                  int n, int m);
void  SearchbyName(long num[], char name[][MAX_LEN],
                   float score[][COURSE_NUM], float  sum[], float aver[],
                   int n, int m);
void  StatisticAnalysis(float score[][COURSE_NUM], int n, int m);
void  PrintScore(long num[], char name[][MAX_LEN],
                 float score[][COURSE_NUM], float  sum[], float aver[],
                 int n, int m) ;
int main()
{	      
    char  ch;
    int   n = 0, m = 0;
    float score[STU_NUM][COURSE_NUM], sum[STU_NUM], aver[STU_NUM];
    long num[STU_NUM];
    char name[STU_NUM][MAX_LEN];
    printf("Input student number(n<30):\n", STU_NUM);
    scanf("%d", &n);
    while (1)
    {	      
        ch = Menu();                        /* 显示菜单，并读取用户输入 */
        switch (ch)
        {	      
        case 1:
            printf("Input course number(m<=%d):\n", COURSE_NUM);
            scanf("%d", &m);
            ReadScore(num, name, score, n, m);
            break;
        case 2:
            AverSumofEveryCourse(score, n, m);
            break;
        case 3:
            AverSumofEveryStudent(score, n, m, sum, aver);
            break;
        case 4:
            SortbyScore(num, name, score, sum, aver, n, m, Descending);
            printf("Sort in descending order by score:\n");
            PrintScore(num, name, score, sum, aver, n, m);
            break;
        case 5:
            SortbyScore(num, name, score, sum, aver, n, m, Ascending);
            printf("Sort in ascending order by score:\n");
            PrintScore(num, name, score, sum, aver, n, m);
            break;
        case 6:
            AsSortbyNum(num, name, score, sum, aver, n, m);
            printf("Sort in ascending order by number:\n");
            PrintScore(num, name, score, sum, aver, n, m);
            break;
        case 7:
            SortbyName(num, name, score, sum, aver, n, m);
            printf("Sort in dictionary order by name:\n");
            PrintScore(num, name, score, sum, aver, n, m);
            break;
        case 8:
            SearchbyNum(num, name, score, sum, aver, n, m);
            break;
        case 9:
            SearchbyName(num, name, score, sum, aver, n, m);
            break;
        case 10:
            StatisticAnalysis(score, n, m);
            break;
        case 11:
            PrintScore(num, name, score, sum, aver, n, m);
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
void ReadScore(long num[], char name[][MAX_LEN],
               float score[][COURSE_NUM], int n, int m)
{	      
    int i, j;
    printf("Input student's ID, name and score:\n");
    for (i = 0; i < n; i++)
    {	      
        scanf("%ld%s", &num[i], name[i]);
        for (j = 0; j < m; j++)
        {	      
            scanf("%f", &score[i][j]);
        }
    }
}	      
/* 函数功能：计算每个学生各门课程的总分和平均分 */
void AverSumofEveryStudent(float score[][COURSE_NUM], int n, int m,
                           float  sum[STU_NUM], float aver[STU_NUM])
{	      
    int i, j;
    for (i = 0; i < n; i++)
    {	      
        sum[i] = 0;
        for (j = 0; j < m; j++)
        {	      
            sum[i] = sum[i] + score[i][j];
        }
        aver[i] = m > 0 ? sum[i] / m : -1;
        printf("student %d:sum=%.0f,aver=%.0f\n", i + 1, sum[i], aver[i]);
    }
}	      
/* 函数功能：计算每门课程的总分和平均分 */
void AverSumofEveryCourse(float score[][COURSE_NUM], int n, int m)
{	      
    int i, j;
    float  sum[COURSE_NUM], aver[COURSE_NUM];
    for (j = 0; j < m; j++)
    {	      
        sum[j] = 0;
        for (i = 0; i < n; i++)
        {	      
            sum[j] = sum[j] + score[i][j];
        }
        aver[j] = n > 0 ? sum[j] / n : -1;
        printf("course %d:sum=%.0f,aver=%.0f\n", j + 1, sum[j], aver[j]);
    }
}	      
/* 函数功能：按选择法将数组sum的元素值排序 */
void SortbyScore(long num[], char name[][MAX_LEN],
                 float score[][COURSE_NUM], float  sum[], float aver[],
                 int n, int m, int (*compare)(float a, float b))
{	      
    int  i, j, k, t;
    for (i = 0; i < n - 1; i++)
    {	      
        k = i;
        for (j = i + 1; j < n; j++)
        {	      
            if ((*compare)(sum[j], sum[k]))     k = j;
        }
        if (k != i)
        {	      
            for (t = 0; t < m; t++) /* 交换m门课程的成绩 */
            {	      
                SwapFloat(&score[k][t], &score[i][t]);
            }
            SwapFloat(&sum[k], &sum[i]);     /* 交换总分 */
            SwapFloat(&aver[k], &aver[i]);  /* 交换平均分 */
            SwapLong(&num[k], &num[i]);      /* 交换学号 */
            SwapChar(name[k], name[i]);      /* 交换姓名 */
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
void AsSortbyNum(long num[], char name[][MAX_LEN],
                 float score[][COURSE_NUM], float  sum[], float aver[],
                 int n, int m)
{	      
    int  i, j, k, t;
    for (i = 0; i < n - 1; i++)
    {	      
        k = i;
        for (j = i + 1; j < n; j++)
        {	      
            if (num[j] < num[k]) k = j;
        }
        if (k != i)
        {	      
            for (t = 0; t < m; t++) /* 交换m门课程的成绩 */
            {	      
                SwapFloat(&score[k][t], &score[i][t]);
            }
            SwapFloat(&sum[k], &sum[i]);     /* 交换总分 */
            SwapFloat(&aver[k], &aver[i]);  /* 交换平均分 */
            SwapLong(&num[k], &num[i]);      /* 交换学号 */
            SwapChar(name[k], name[i]);      /* 交换姓名 */
        }
    }
}	      
/* 函数功能：交换法实现字符串按字典顺序排序 */
void SortbyName(long num[], char name[][MAX_LEN], float score[][COURSE_NUM],
                float  sum[], float aver[], int n, int m)
{	      
    int  i, j, t;
    for (i = 0; i < n - 1; i++)
    {	      
        for (j = i + 1; j < n; j++)
        {	      
            if (strcmp(name[j], name[i]) < 0)
            {	      
                for (t = 0; t < m; t++)  /* 交换m门课程的成绩 */
                {	      
                    SwapFloat(&score[i][t], &score[j][t]);
                }
                SwapFloat(&sum[i], &sum[j]);     /* 交换总分 */
                SwapFloat(&aver[i], &aver[j]);  /* 交换平均分 */
                SwapLong(&num[i], &num[j]);      /* 交换学号 */
                SwapChar(name[i], name[j]);       /* 交换姓名 */
            }
        }
    }
}	      
/* 函数功能：按学号查找学生成绩并显示查找结果 */
void SearchbyNum(long num[], char name[][MAX_LEN],
                 float score[][COURSE_NUM], float  sum[], float aver[],
                 int n, int m)
{	      
    long  number;
    int   i, j;
    printf("Input the number you want to search:\n");
    scanf("%ld", &number);
    for (i = 0; i < n; i++)
    {	      
        if (num[i] == number)
        {	      
            printf("%ld\t%s\t", num[i], name[i]);
            for (j = 0; j < m; j++)
            {	      
                printf("%.0f\t", score[i][j]);
            }
            printf("%.0f\t%.0f\n", sum[i], aver[i]);
            return;
        }
    }
    printf("Not found!\n");
}	      
/* 函数功能：按姓名的字典顺序排出成绩表 */
void SearchbyName(long num[], char name[][MAX_LEN],
                  float score[][COURSE_NUM], float  sum[], float aver[],
                  int n, int m)
{	      
    char x[MAX_LEN];
    int  i, j;
    printf("Input the name you want to search:\n");
    scanf("%s", x);
    for (i = 0; i < n; i++)
    {	      
        if (strcmp(name[i], x) == 0)
        {	      
            printf("%ld\t%s\t", num[i], name[i]);
            for (j = 0; j < m; j++)
            {	      
                printf("%.0f\t", score[i][j]);
            }
            printf("%.0f\t%.0f\n", sum[i], aver[i]);
            return;
        }
    }
    printf("Not found!\n");
}	      
/* 函数功能：统计各分数段的学生人数及所占的百分比 */
void StatisticAnalysis(float score[][COURSE_NUM], int n, int m)
{	      
    int  i, j, total, t[6];
    for (j = 0; j < m; j++)
    {	      
        printf("For course %d:\n", j + 1);
        memset(t, 0, sizeof(t));    /* 将数组t的全部元素初始化为0 */
        for (i = 0; i < n; i++)
        {	      
            if (score[i][j] >= 0 && score[i][j] < 60)  t[0]++;
            else if (score[i][j] < 70)               t[1]++;
            else if (score[i][j] < 80)               t[2]++;
            else if (score[i][j] < 90)               t[3]++;
            else if (score[i][j] < 100)              t[4]++;
            else if (score[i][j] == 100)            t[5]++;
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
void PrintScore(long num[], char name[][MAX_LEN],
                float score[][COURSE_NUM], float  sum[],
                float aver[], int n, int m)
{	      
    int i, j;
    for (i = 0; i < n; i++)
    {	      
        printf("%ld\t%s\t", num[i], name[i]);
        for (j = 0; j < m; j++)
        {	      
            printf("%.0f\t", score[i][j]);
        }
        printf("%.0f\t%.0f\n", sum[i], aver[i]);
    }
}	      