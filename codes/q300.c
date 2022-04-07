#include <stdio.h>
int DayofYear(int year, int month, int day);
int dayTab[2][13] =
{	 	 	 	  	
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
}	 	 	 	  	;

main()
{	 	 	 	  	
    int year, month, day;
    printf("Please enter year, month, day:\n");
    scanf("%d,%d,%d", &year, &month, &day);
    printf("yearDay = %d\n", DayofYear(year, month, day));
}	 	 	 	  	
int DayofYear(int year, int month, int day)
{	 	 	 	  	
    int i, leap;

    for (i = 1; i < month; i++)
    {	 	 	 	  	
        if ( year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        {	 	 	 	  	
            leap = 0;
            day = day + dayTab[leap][i];
        }
        else
        {	 	 	 	  	
            leap = 1;
            day = day + dayTab[leap][i];
        }
    }

    return day;
}	 	 	 	  	