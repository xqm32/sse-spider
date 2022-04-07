#include <stdio.h>
#include <math.h>

int main()
{	         
    printf("Enter a date(year month day):\n");

    int year = 0, month = 0, day = 0;

    scanf("%d%d%d", &year, &month, &day);

    printf("You entered the date: %02d/%02d/%d\n",  month, day, year);

    return 0;

}	         