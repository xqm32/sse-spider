#include  <stdio.h>
#include  <stdlib.h>
#define   STU_NUM 30           /* 最多的学生人数 */
int   Menu(void);
void  ReadScore(long num[], float score[], int n);
void  AverSumofScore(float score[], int n);
void  SortbyScore(long num[], float score[], int n,
                  int (*compare)(float a, float b));
int   Ascending(float a, float b);
int   Descending(float a, float b);
void  SwapFloat(float *x, float *y);
void  SwapLong(long *x, long *y);
void  AsSortbyNum(long num[], float score[], int n);
void  SearchbyNum(long num[], float score[], int n);
void  StatisticAnalysis(float score[], int n);
void  PrintScore(long num[], float score[], int n) ;
int main()
{	        
    char   itemSelected;
    int    n = 0;
    float score[STU_NUM];
    long   num[STU_NUM];
    printf("Input student number(n<%d):\n", STU_NUM);
    scanf("%d", &n);
    while (1)
    {	        
        itemSelected = Menu();  /* 显示菜单，并读取用户输入 */
        switch (itemSelected)
        {	        
        case 1:
            ReadScore(num, score, n);
            break;
        case 2:
            AverSumofScore(score, n);
            break;
        case 3:
            SortbyScore(num, score, n, Descending);
            printf("Sort in descending order by score:\n");
            PrintScore(num, score, n);
            break;
        case 4:
            SortbyScore(num, score, n, Ascending);
            printf("Sort in ascending order by score:\n");
            PrintScore(num, score, n);
            break;
        case 5:
            AsSortbyNum(num, score, n);
            printf("Sort in ascending order by number:\n");
            PrintScore(num, score, n);
            break;
        case 6:
            SearchbyNum(num, score, n);
            break;
        case 7:
            StatisticAnalysis(score, n);
            break;
        case 8:
            PrintScore(num, score, n);
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
    printf("2.Caculate total and average score of course\n");
    printf("3.Sort in descending order by score\n");
    printf("4.Sort in ascending order by score\n");
    printf("5.Sort in ascending order by number\n");
    printf("6.Search by number\n");
    printf("7.Statistic analysis\n");
    printf("8.List record\n");
    printf("0.Exit\n");
    printf("Please Input your choice:\n");
    scanf("%d", &itemSelected);     /* 读入用户输入 */
    return itemSelected;
}	        
/* 函数功能：输入n个学生的某门课成绩 */
void ReadScore(long num[], float score[], int n)
{	        
    int i;
    printf("Input student's ID and score:\n");
    for (i = 0; i < n; i++)
    {	        
        scanf("%ld%f", &num[i], &score[i]);
    }
}	        
/* 函数功能：计算全班总分和平均分 */
void AverSumofScore(float score[], int n)
{	        
    int    i;
    float  sum = 0;
    for (i = 0; i < n; i++)
    {	        
        sum = sum + score[i];
    }
    printf("sum=%.0f,aver=%.2f\n", sum, n > 0 ? sum / n : 0);
}	        
/* 函数功能：按选择法将数组score的元素值排序 */
void SortbyScore(long num[], float score[], int n,
                 int (*compare)(float a, float b))
{	        
    int     i, j, k;
    for (i = 0; i < n - 1; i++)
    {	        
        k = i;
        for (j = i + 1; j < n; j++)
        {	        
            if ((*compare)(score[j], score[k])) k = j;
        }
        if (k != i)
        {	        
            SwapFloat(&score[k], &score[i]); /* 交换成绩 */
            SwapLong(&num[k], &num[i]);       /* 交换学号 */
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
/* 函数功能：按选择法将数组num的元素值按从低到高排序 */
void AsSortbyNum(long num[], float score[], int n)
{	        
    int     i, j, k;
    for (i = 0; i < n - 1; i++)
    {	        
        k = i;
        for (j = i + 1; j < n; j++)
        {	        
            if (num[j] < num[k])  k = j;
        }
        if (k != i)
        {	        
            SwapFloat(&score[k], &score[i]); /* 交换成绩 */
            SwapLong(&num[k], &num[i]);       /* 交换学号 */
        }
    }
}	        
/* 函数功能：按学号查找学生成绩并显示查找结果 */
void SearchbyNum(long num[], float score[], int n)
{	        
    long number;
    int   i;
    printf("Input the number you want to search:\n");
    scanf("%ld", &number);
    for (i = 0; i < n; i++)
    {	        
        if (num[i] == number)
        {	        
            printf("%ld\t%.0f\n", num[i], score[i]);
            return;
        }
    }
    printf("Not found!\n");
}	        
/* 函数功能：统计各分数段的学生人数及所占的百分比 */
void StatisticAnalysis(float score[], int n)
{	        
    int  i, total, t[6] = {0, 0, 0, 0, 0, 0};
    for (i = 0; i < n; i++)
    {	        
        if (score[i] >= 0 && score[i] < 60)t[0]++;
        else if (score[i] < 70)            t[1]++;
        else if (score[i] < 80)            t[2]++;
        else if (score[i] < 90)            t[3]++;
        else if (score[i] < 100)           t[4]++;
        else if (score[i] == 100)        t[5]++;
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
/* 函数功能： 打印学生成绩 */
void PrintScore(long num[], float score[], int n)
{	        
    int i;
    for (i = 0; i < n; i++)
    {	        
        printf("%ld\t%.0f\n", num[i], score[i]);
    }
}	        