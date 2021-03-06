#include    <stdio.h>
int  DayofYear(int year, int month, int day);
int dayTab[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},                           {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
int main()
{	  	    
    int year, month, day, yearDay;
    printf("Please enter year, month, day:");
    scanf("%d,%d,%d", &year, &month, &day);
    yearDay = DayofYear(year, month, day);
    printf("yearDay = %d\n", yearDay);
    return 0;
}	  	    
/* 函数功能：对给定的某年某月某日，计算并返回它是这一年的第几天 */
int  DayofYear(int year, int month, int day)
{	  	    
    int  i, leap;
    /* 若year为闰年，即leap值为1，则用第1行元素dayTab[1][i]计算；
    否则leap值为0，用第0行dayTab[0][i]计算 */
    leap = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
    for (i = 1; i < month; i++)
    {	  	    
        day = day + dayTab[leap][i];
    }
    return day;         /* 返回计算出的day的值 */
}	  	    