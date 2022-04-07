﻿#include <stdio.h>
#include <math.h>

int main()
{	       
    int i, m;
    int p, q, flagp, flagq;

    printf("Input a number:\n");
    scanf("%d", &m);

    if (m % 2 == 0)
    {	       
        for (p = 2; p < m; p++)
        {	       
            q = m - p;

            /*以下判断p是否为素数*/
            flagp = 1;
            for (i = 2; i <= sqrt(p) && flagp; i++)
            {	       
                if (p % i == 0)
                {	       
                    flagp = 0;
                }
            }

            /*以下判断q是否为素数*/
            flagq = 1;
            for (i = 2; i <= sqrt(q) && flagq; i++)
            {	       
                if (q % i == 0)
                {	       
                    flagq = 0;
                }
            }

            /*若是素数将其打印，并退出循环*/
            if (flagp && flagq)
            {	       
                printf("%d=%d+%d\n", m, p, q);
                break;
            }
        }
    }
    else
        printf("Input error!\n");

    return 0;
}	       