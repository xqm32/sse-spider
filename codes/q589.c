#include <stdio.h>
int main()
{	   	   	  	 
    int mingAge, motherAge, year;
    mingAge = 12;
    motherAge = mingAge + 24;
    year = 1;
    while ((motherAge + year) != 2 * (mingAge + year))
    {	   	   	  	 
        year = year + 1;
    }
    printf("year=%d\n", year);
    printf("mingAge=%d\n", mingAge + year);
    printf("motherAge=%d\n", motherAge + year);
    return 0;
}	   	   	  	 


