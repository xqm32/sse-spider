#include <stdio.h>
int main()
{  	  		   	  
    int days = 365, times = 0;
    int i, y, n, year;
    printf("Input year:");
    n = scanf("%d", &y);
    if (n != 1 || y < 1901)
    {  	  		   	  
        printf("Input error!\n");
        return 0;
    }
    for (year=1901; year<=y; year++)
    {  	  		   	  
        for (i=1; i<=12; i++)
        {  	  		   	  
            if ((days+1)%7 == 0)
            {  	  		   	  
                times = times + 1;
            }
            if (i == 2)
            {  	  		   	  
                if ((year%4==0 && year%100!=0)||(year%400==0))
                {  	  		   	  
                    days = days + 29;
                }
                else
                {  	  		   	  
                    days = days + 28;
                }
            }
            else if (i==1||i==3||i==5||i==7||i==8||i==10||i==12)
            {  	  		   	  
                days = days + 31;
            }
            else
            {  	  		   	  
                days = days + 30;
            }
        }
    }
    printf("%d\n",times);
    return 0;
}  	  		   	  
