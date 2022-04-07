﻿#include <stdio.h>

#define		N	10
#define		M	10

int main()
{	      	   	 
    int i, j, k, m, n, flag1, flag2, a[N][M], max, maxi, maxj;

    printf("\n输入行数：");
    scanf("%d", &n);
    printf("\n输入列数：");
    scanf("%d", &m);

    for (i = 0; i < n; i++)
    {	      	   	 
        printf("第%d行？\n", i);
        for (j = 0; j < m; j++)
        {	      	   	 
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {	      	   	 
        for (j = 0; j < m; j++)
        {	      	   	 
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    flag2 = 0;
    for (i = 0; i < n; i++)
    {	      	   	 
        max = a[i][0];
        for (j = 0; j < m; j++)
        {	      	   	 
            if (a[i][j] > max)
            {	      	   	 
                max = a[i][j];
                maxj = j;
            }
        }
        for (k = 0, flag1 = 1; k < n && flag1; k++)
        {	      	   	 
            if (max > a[k][maxj])
            {	      	   	 
                flag1 = 0;
            }
        }
        if (flag1)
        {	      	   	 
            printf("\n第%d行，第%d列的%d是鞍点\n", i, maxj, max);
            flag2 = 1;
        }
    }
    if (!flag2)
    {	      	   	 
        printf("\n矩阵中无鞍点!\n");
    }

    return 0;
}	      	   	 