﻿#include <stdio.h>
#define STUD_N   40                              /* 最多学生人数 */
#define COURSE_N 3                               /* 考试科目数 */
int ReadScore(int score[][COURSE_N], long num[]);
void  AverforStud(int score[][COURSE_N], int sum[], float aver[], int n);
void  AverforCourse(int score[][COURSE_N], int sum[], float aver[], int n);
void  Print(int score[][COURSE_N], long num[], int sumS[], float averS[],
            int sumC[], float averC[], int n);
int main()
{	   	 	 		 	   
    int   score[STUD_N][COURSE_N], sumS[STUD_N], sumC[STUD_N], n;
    long  num[STUD_N];
    float averS[STUD_N], averC[STUD_N];
    n = ReadScore(score, num);              /* 读入学生成绩 */
    AverforStud(score, sumS, averS, n);    /* 计算每个学生的总分平均分 */
    AverforCourse(score, sumC, averC, n); /* 计算每门课程的总分平均分 */
    Print(score, num, sumS, averS, sumC, averC, n); /* 输出学生成绩 */
    return 0;
}	   	 	 		 	   
/* 函数功能：输入学生的学号及其三门课的成绩，当输入负值时，结束输入，返回学生人数 */
int ReadScore(int score[][COURSE_N], long num[])
{	   	 	 		 	   
    int i, j, n;
    printf("Input the total number of the students(n<40):");
    scanf("%d", &n);                      /* 输入参加考试的学生人数 */
    printf("Input student’s ID and score as: MT  EN  PH:\n");
    for (i = 0; i < n; i++)              /* 对所有学生进行循环 */
    {	   	 	 		 	   
        scanf("%ld", &num[i]);           /* 以长整型格式输入每个学生的学号 */
        for (j = 0; j < COURSE_N; j++)  /* 对所有课程进行循环 */
        {	   	 	 		 	   
            scanf("%d", &score[i][j]);    /* 输入每个学生的各门课成绩 */
        }
    }
    return i;                               /* 返回学生人数 */
}	   	 	 		 	   
/* 函数功能： 计算每个学生的总分和平均分 */
void AverforStud(int score[][COURSE_N], int sum[], float aver[], int n)
{	   	 	 		 	   
    int  i, j;
    for (i = 0; i < n; i++)
    {	   	 	 		 	   
        sum[i] = 0;
        for (j = 0; j < COURSE_N; j++)     /* 对所有课程进行循环 */
        {	   	 	 		 	   
            sum[i] = sum[i] + score[i][j]; /* 计算第i个学生的总分 */
        }
        aver[i] = (float)sum[i] / COURSE_N;/* 计算第i个学生的平均分 */
    }
}	   	 	 		 	   
/* 函数功能：计算每门课程的总分和平均分 */
void  AverforCourse(int score[][COURSE_N], int sum[], float aver[], int n)
{	   	 	 		 	   
    int  i, j;
    for (j = 0; j < COURSE_N; j++)
    {	   	 	 		 	   
        sum[j] = 0;
        for (i = 0; i < n; i++)              /* 对所有学生进行循环 */
        {	   	 	 		 	   
            sum[j] = sum[j] + score[i][j]; /* 计算第j门课程的总分 */
        }
        aver[j] = (float)sum[j] / n;         /* 计算第j门课程的平均分 */
    }
}	   	 	 		 	   
/*函数功能：打印每个学生的学号、各门课成绩、总分和平均分，以及每门课的总分和平均分*/
void  Print(int score[][COURSE_N], long num[], int sumS[], float averS[],
            int sumC[], float averC[], int n)
{	   	 	 		 	   
    int  i, j;
    printf("Counting Result:\n");
    printf("Student’s ID\t  MT \t  EN \t  PH \t SUM \t AVER\n");
    for (i = 0; i < n; i++)
    {	   	 	 		 	   
        printf("%12ld\t", num[i]);         /* 以长整型格式打印学生的学号 */
        for (j = 0; j < COURSE_N; j++)
        {	   	 	 		 	   
            printf("%4d\t", score[i][j]); /* 打印学生的每门课成绩 */
        }
        printf("%4d\t%5.1f\n", sumS[i], averS[i]);/*打印学生的总分平均分*/
    }
    printf("SumofCourse \t");
    for (j = 0; j < COURSE_N; j++)          /* 打印每门课的总分 */
    {	   	 	 		 	   
        printf("%4d\t", sumC[j]);
    }
    printf("\nAverofCourse\t");
    for (j = 0; j < COURSE_N; j++)          /* 打印每门课的平均分 */
    {	   	 	 		 	   
        printf("%4.1f\t", averC[j]);
    }
    printf("\n");
}	   	 	 		 	   

