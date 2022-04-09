#include <stdio.h>
#include <math.h>
typedef struct
{    	  	       
    int year;
    int month;
    int day;
}    	  	        Date;//0.5
int isleapyear(int y);
int islegal(Date x);
int calcday(Date x);
 
int dayofmonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};//0.5
int main()
{    	  	       
    Date date_1, date_2;
    printf("Please input the first date:\n");
    scanf("%d%d%d", &date_1.year, &date_1.month, &date_1.day);//0.5
    printf("Please input the second date:\n");
    scanf("%d%d%d", &date_2.year, &date_2.month, &date_2.day);//0.5
    if (!islegal(date_1) || !islegal(date_2) || date_1.year != date_2.year)//1
        printf("Day between two dates:-1\n");
    else
    {    	  	       
        printf("Day between two dates:%d\n", abs(calcday(date_1) - calcday(date_2)));
    }
    return 0;
}    	  	       
 
int isleapyear(int y)
{    	  	       
    if (y % 400 == 0)
        return 1;
    else if (y % 100 == 0)
        return 0;
    else if (y % 4 == 0)
        return 1;
    return 0;
}    	  	       
int islegal(Date x)
{    	  	       
    if (x.month < 1 || x.month > 12)
        return 0;
    if (x.month == 2 && isleapyear(x.year))
    {    	  	       
        if (x.day >= 1 && x.day <= 29)
            return 1;
        else
            return 0;
    }
    else if (x.day < 1 || x.day > dayofmonth[x.month - 1])
        return 0;
    return 1;
 
}    	  	       
int calcday(Date x)
{    	  	       
    int ans = 0 , i;
    for (i = 1; i < x.month; ++i)
        if (i == 2)
            ans = ans + 28 + isleapyear(x.year);//1
        else
            ans = ans + dayofmonth[i - 1];//1
    ans = ans + x.day;
    return ans;
}    	  	       