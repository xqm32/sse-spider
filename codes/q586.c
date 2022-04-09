#include <stdio.h>
int main()
{	   	   		 	 
    int y, m, leap, season, days;
    printf("Please enter year,month:");
    scanf("%d,%d", &y, &m);       //1
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))   //2
        leap = 1;
    else
        leap = 0;
    if (m >= 3 && m <= 5)  //1
        season = 1;
    else if (m >= 6 && m <= 8)
        season = 2;
    else if (m >= 9 && m <= 11)
        season = 3;
    else
        season = 4;
    switch (m)  //1
    {	   	   		 	 
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        days = 31;
        break;             //1
    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;
    case 2:
        if (leap == 1)
            days = 29;
        else
            days = 28;
    }
    printf("%d %s leap year\n", y, (leap == 1 ? "is" : "is not"));
    printf("The season is ");
    switch (season)    //1
    {	   	   		 	 
    case 1:
        printf("spring\n");
        break;
    case 2:
        printf("summer\n");
        break;
    case 3:
        printf("autumn\n");
        break;
    case 4:
        printf("winter\n");
    }
    printf("The number of days of this month is %d\n", days);
    return 0;
}	   	   		 	 