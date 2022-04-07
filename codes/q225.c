#include <stdio.h>
#define  RATE  0.01875
#define  MONTHS 	12
#define  CAPITAL 1000
#define  YEARS 5
main()
{		 		 	 	 
    int  i;
    double 	deposit = 0;
    for (i = 0; i < YEARS; i++)
    {		 		 	 	 
        deposit = (deposit + CAPITAL) / (1 + RATE * MONTHS);
    }
    printf("He must save %.2f at the first year.\n", deposit);
}		 		 	 	 

