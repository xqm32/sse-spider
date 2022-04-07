#include    <stdio.h>
int  DayofYear(int year, int month, int day);
int dayTab[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},						    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
int main()
{	   		     
    int year, month, day, yearDay; //1
    printf("Please enter year, month, day:"); //1
    scanf("%d,%d,%d", &year, &month, &day); //1
    yearDay = DayofYear(year, month, day); //1
    printf("yearDay = %d\n", yearDay); //1
    return 0;
}	   		     
/* 函数功能：对给定的某年某月某日，计算并返回它是这一年的第几天 */
int  DayofYear(int year, int month, int day)
{	   		     
    int  i, leap; //1
    /* 若year为闰年，即leap值为1，则用第1行元素dayTab[1][i]计算；
    否则leap值为0，用第0行dayTab[0][i]计算 */
    leap = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0); //1
    for (i = 1; i < month; i++) //1
    {	   		     
        day = day + dayTab[leap][i]; //1
    }
    return day;         /* 返回计算出的day的值 */
}	   		     