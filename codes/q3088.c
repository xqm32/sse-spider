#include <stdio.h>
int main()
{	    	      
    int j;
    double toStranger = 0;  /* 富翁给陌生人的钱，以'元'为单位 */
    double toRichman = 0;   /* 陌生人给富翁的钱，以'元'为单位 */
    double term = 0.01;     /* 富翁第一天给陌生人0.01元 */
    for (j = 1; j <= 30; j++)
    {	    	      
        toRichman += 100000; /* 陌生人每天给富翁10万元 */
        toStranger += term;
        term = term * 2;      /* 富翁每天给陌生人的钱是前一天的两倍 */
    }
    printf("to Stranger: %.2lf yuan\n", toStranger);
    printf("to Richman: %.2lf yuan\n", toRichman);
    return 0;
}	    	      