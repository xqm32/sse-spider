#include  <stdio.h>

int main()

{	    	   	   

    int  year, n;

    n = scanf("%d", &year);
    if (n == 1 && year >= 1)
    {	    	   	   



        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        {	    	   	   
            printf("Yes\n");
        }
        else
        {	    	   	   
            printf("No\n");
        }

    }
    else
    {	    	   	   
        printf("Input error!\n");
    }

    return 0;

}	    	   	   