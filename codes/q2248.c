#include <math.h>
#include <stdio.h>

int main()
{	 	 		  	
    int i, j, s, t, s1;
    for (i = 11; i <= 9999; i++)
    {	 	 		  	
        s = 1;
        t = sqrt(i);
        for (j = 2; j <= t; j++)
        {	 	 		  	
            if (i % j == 0)
                s = s + j + i / j;
        }
        if (i == t * t)
            s -= t;
        if (i < s)
        {	 	 		  	
            s1 = 1;
            t = sqrt(s);
            for (j = 2; j <= t; j++)
            {	 	 		  	
                if (s % j == 0)
                    s1 = s1 + j + s / j;
            }
            if (s == t * t)
                s1 -= t;
            if (s1 == i)
            {	 	 		  	
                printf("相亲数：%d,%d\n", i, s);
                printf("%d 的真因数之和为：%d", i, 1);

                for (j = 2; j <= i / 2; j++)
                {	 	 		  	
                    if (i % j == 0)
                        printf("+%d", j);
                }
                printf("=%d\n", s);
                printf("%d 的真因数之和为：%d", s, 1);
                for (j = 2; j <= s / 2; j++)
                {	 	 		  	
                    if (s % j == 0)
                        printf("+%d", j);
                }
                printf("=%d\n", i);
            }
        }
    }
    return 0;
}	 	 		  	