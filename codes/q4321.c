#include<stdio.h>
typedef struct date
{		   	   		 
int year;
int month;
int day;
}		   	   		 Date;
int isLeap(int year);
int dif(Date a, Date b);
void main()
{		   	   		 
Date a, b;
printf("请输入日期1（空格分隔，年月日）:\n");
scanf("%d%d%d", &a.year, &a.month, &a.day);
printf("请输入日期2（空格分隔，年月日，晚于日期1）:\n");
scanf("%d%d%d", &b.year, &b.month, &b.day);
printf("相差天数为:");
printf("\t%d天\n", dif(a, b));
}		   	   		 
int isLeap(int year) //判断一个年份是否是闰年的函数
{		   	   		 
if(year%400==0 || (year%4==0 && year%100!=0))
return 1;
else
return 0;
}		   	   		 
int dif(Date a, Date b)
{		   	   		 
int i;
long day=0, day1=0, day2=0;
int d[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};// day变量为年份a到年份b前一年的年份总天数
for(i=a.year; i<b.year; i++)
if(isLeap(i))
day += 366;
else
day += 365;
// day1变量为年份a年初到当天的年内总天数
for(i=1; i<a.month; ++i)
day1 += d[isLeap(a.year)][i];
day1 += a.day;
// day1变量为年份b年初到当天的年内总天数
for(i=1; i<b.month; ++i)
day2 += d[isLeap(b.year)][i];
day2 += b.day;
return day + day2 - day1;
}		   	   		 
