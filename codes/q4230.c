#include "stdio.h"
#include "conio.h"
main()
{		 	       
    int day, x1, x2;
    day = 9;
    x2 = 1;
    while (day > 0)
    {		 	       
        x1 = (x2 + 1) * 2; /*第一天的糖果数是第2天糖果数加1后的2倍*/
        x2 = x1;
        day--;
    }
    printf("the total is %d\n", x1);
    getch();
}		 	       