#include <stdio.h>

struct date_rec
{	   	 	 	
    int day;
    int month;
    int year;
}	   	 	 	;

struct date_rec date1, date2;

void input_date(struct date_rec *current_date)
{	   	 	 	
    printf("请输入当前日期（年 月 日）：");
    scanf("%d%d%d", &current_date->year, &current_date->month, &current_date->day);
}	   	 	 	

int compare_date(struct date_rec *date1, struct date_rec *date2)
{	   	 	 	
    if (date1->year < date2->year)
    {	   	 	 	
        return -1;
    }
    else if (date1->year > date2->year)
    {	   	 	 	
        return 1;
    }

    if (date1->month < date2->month)
    {	   	 	 	
        return -1;
    }
    else if (date1->month > date2->month)
    {	   	 	 	
        return 1;
    }

    if (date1->day < date2->day)
    {	   	 	 	
        return -1;
    }
    else if (date1->day > date2->day)
    {	   	 	 	
        return 1;
    }

    return 0;
}	   	 	 	

void output_date(struct date_rec *current_date)
{	   	 	 	
    printf("当前日期：%d年%d月%d日！\n", current_date->year,
           current_date->month, current_date->day);
}	   	 	 	

int main()
{	   	 	 	
    input_date(&date1);
    input_date(&date2);

    output_date(&date1);
    output_date(&date2);

    switch (compare_date(&date1, &date2))
    {	   	 	 	
    case 1:
        printf("第一个日期晚于第二个日期！");
        break;
    case -1:
        printf("第一个日期早于第二个日期！");
        break;
    case 0:
        printf("两个日期相同！");
    }

    return 0;
}	   	 	 	