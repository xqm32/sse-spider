#include<stdio.h>
 struct Date
   {		   	     	 
int  day;
int month;
int year;
   };
int main()
{  void days(struct Date date1,int *q);
   struct Date date1;
   struct Date *p;
   int n;
   printf("请输入年份:");
   scanf("%d",&date1.year);
   printf("请输入月份:");
   scanf("%d",&date1.month);
   printf("请输入日期:");
   scanf("%d",&date1.day);
   p=&date1;
   days(*p,&n);        //使指针指向变量n，存放计算的总天数
   printf("%d年%d月%d日是该年的第%d天。\n",date1.year,date1.month,date1.day,n);
   return 0;
}		   	     	 
void days(struct Date date1,int *q)
{  int month2;
if(date1.year%400==0 || (date1.year%100!=0 && date1.year%4==0))
month2=29;           //判断为润年，其该年的二月为29天
else month2=28;
   switch(date1.month)
   {		   	     	 
   case 1 :*q=date1.day;break;
   case 2:*q=31+date1.day; break;
   case 3: *q=month2+31+date1.day; break;
   case 4:*q=31*2+month2+date1.day; break;
   case 5:*q=31*2+month2+30+date1.day;break;
   case 6:*q=31*3+month2+30+date1.day; break;
   case 7:*q=31*3+30*2+month2+date1.day;break;
   case 8:*q=31*4+30*2+month2+date1.day;break;
   case 9: *q=5*31+30*2+month2+date1.day;break;
   case 10:*q=5*31+3*30+month2+date1.day; break;
   case 11:*q=6*31+3*30+month2+date1.day;break;
   case 12:*q=6*31+4*30+month2+date1.day;
   }                     //把计算的总天数赋值给*p
}		   	     	 
