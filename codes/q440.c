#include <stdio.h>
#include <stdlib.h>
#define N 6
int main()
{		    	  
    int i, j, k, m, n, num;
    int a[N];
    a[0] = 1;
    a[5] = 6;
    num = 0;
    printf("The possible table satisfied above conditions are:\n");
    for (i = 2; i <= 5; i++)
        for (j = 2; j <= 5; j++)
            for (n = 2; n <= 5; n++)
                for (m = 2; m <= 5; m++)
                {		    	  
                    a[1] = i;
                    a[2] = j;
                    a[3] = n;
                    a[4] = m;

                    if (a[2] > a[1] && a[4] > a[3] && a[4] > a[1] && a[1] != a[3] && a[2] != a[3] && a[2] != a[4])
                    {		    	  
                        num++;
                        printf("\nNo.:%d", num);

                        for (k = 0; k < 6; k++)
                        {		    	  
                            if (k % 3 == 0)
                                printf("\n");
                            printf("%3d", a[k]);
                        }

                    }
                }

    return 0;
}		    	  