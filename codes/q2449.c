#include <stdio.h>

struct date_rec
{	 	 
    int day;
    int month;
    int year;
}	 	 ;

struct date_rec current_date;

int days_of_month[][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
}	 	 ;

int is_leap(int year)
{	 	 
    return ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)));
}	 	 

void input_date(struct date_rec *current_date)
{	 	 
    printf("请输入当前日期（年 月 日）：");
    scanf("%d%d%d", &current_date->year, &current_date->month, &current_date->day);
}	 	 

void increment_date(struct date_rec *current_date)
{	 	 
    current_date->day++;
    if (current_date->day > days_of_month[is_leap(current_date->year)][current_date->month])
    {	 	 
        current_date->day = current_date->day - days_of_month[is_leap(current_date->year)][current_date->month]
                            ;
        current_date->month++;
        if (current_date->month > 12)
        {	 	 
            current_date->year++;
            current_date->month = current_date->month - 12;
        }
    }
}	 	 

void output_date(struct date_rec *current_date)
{	 	 
    printf("当前日期：%d年%d月%d日！", current_date->year,
           current_date->month, current_date->day);
}	 	 

int main()
{	 	 
    input_date(&current_date);
    increment_date(&current_date);
    output_date(&current_date);

    return 0;
}	 	 