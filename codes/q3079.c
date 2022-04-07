#include<stdio.h>
int main()
{	    	 	 	 	 
    int x = 1, day, n, flag;
    do
    {	    	 	 	 	 
        flag = 0;
        printf("Input days:\n");
        n = scanf("%d", &day);
        if (n != 1)
        {	    	 	 	 	 
            flag = 1;
            while (getchar() != '\n');
        }
        if (day <= 0)
            flag = 1;
    }
    while (flag == 1);

    while (day > 1)
    {	    	 	 	 	 
        x = (x + 1) * 2;
        day--;
    }

    printf("x=%d\n", x);
    return 0;
}	    	 	 	 	 