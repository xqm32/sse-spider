#include<stdio.h>
int main()
{	   	 	      	
    int n, i, x, flag = 1;
    for (n = 6; flag; n++)
    {	   	 	      	
        for (x = n, i = 1; i <= 5 && flag; i++)
        {	   	 	      	
            if ((x - 1) % 5 == 0)
                x = 4 * (x - 1) / 5;
            else
                flag = 0;
        }
        if (flag)
            break;
        else
            flag = 1;
    }
    printf("%d\n", n);
    return 0;
}	   	 	      	