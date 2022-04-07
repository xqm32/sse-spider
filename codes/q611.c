#include <math.h>
int main()
{	   	  	 	     
    int num, i, apnum = 0;
    int copy;
    int first = 0;
    scanf("%d", &num);
    copy = num;
    for (i = 2; i < copy; i++)
    {	   	  	 	     
        if (!(num % i))
        {	   	  	 	     
            if (first++ != 0)
                printf(",");
            apnum = i;
            num = num / i;
            i--;
            printf("%d", apnum);
        }
    }
    if (apnum == 0)
        printf("Invalid input.\n");
    return 0;
}	   	  	 	     

