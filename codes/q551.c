#include<stdio.h>
int main()
{	   	 	 		   
    int i, j, k, count = 0;
    for (i = 1; i <= 5; i++)
        for (j = 1; j <= 5; j++)
            for (k = 1; i != j && k <= 5; k++)
                if (k != i && k != j)
                {	   	 	 		   
                    count++;
                    printf("%d:%d,%d,%d\n", count, i, j, k);

                }

    return 0;
}	   	 	 		   