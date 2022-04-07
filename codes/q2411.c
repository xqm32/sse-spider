#include <stdio.h>

int main()
{	 	   
    int i, j;

    for (i = 1; i <= 9; i++)
    {	 	   
        for (j = 1; j < i; j++)
            printf(" ");

        for (; j <= 9; j++)
            printf("%d", j);

        for (j = 1; j <= 9 - i; j++)
            printf("%d", 9 - j);
        printf("\n");
    }

    return 0;
}	 	   