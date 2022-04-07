#include <stdio.h>
main()
{		         
    int  n = 0, t;
    for (t = 0; t <= 20 * 7; t++)
    {		         
        if (t % 5 == 0 && t <= 20 * 5) /* 控制A舰每隔5秒放1次 */
        {		         
            n++;
            continue;                  /* 继续下一次循环 */
        }
        if (t % 6 == 0 && t <= 20 * 6) /* 控制B舰每隔6秒放1次 */
        {		         
            n++;
            continue;                  /* 继续下一次循环 */
        }
        if (t % 7 == 0)                /* 控制C舰每隔7秒放1次 */
        {		         
            n++;
        }
    }
    printf("n = %d\n", n);
}		         

