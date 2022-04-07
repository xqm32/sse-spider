#include <stdio.h>

int main()
{	        	 
    int cards[14] = {0};
    int i, j = 1, n;
    for (i = 1 ; i <= 13 ; i++)
    {	        	 
        n = 1;
        do
        {	        	 
            if (j > 13)
                j = 1;
            if (cards[j] > 0)
                j++;
            else
            {	        	 
                if (n == i)
                    cards[j] = i;
                j++;
                n++;
            }
        }
        while (n <= i);
    }
    for (i = 1; i <= 13; i++)
        printf("%d ", cards[i]);
    printf("\n");

    return 0;
}	        	 