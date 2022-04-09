/* n个人循环报数逢3退出求最后一人是第几号 */

#include <stdio.h>

#define		NMAX	50 /* 定义最多人数为50人 */

int main(void)
{	    		   
    int i, k, m, n, num[NMAX], *p;

    printf("请输入人数：");
    scanf("%d", &n);

    p = num;
    for (i = 0; i < n; i++)
    {	    		   
        *(p + i) = i + 1; /* 以1至n为序给每个人编号 */
    }
    i = 0;
    k = 0; /* k为按1,2,3报数时的计数变量 */
    m = 0; /* m为退出人数 */
    while (m < n - 1)
    {	    		   
        if (*(p + i) != 0)
        {	    		   
            k++;
        }
        if (k == 3)
        {	    		   
            *(p + i) = 0; /* 对退出人员的编号置为0 */
            k = 0;
            m++;
        }
        i++;
        if (i == n)
        {	    		   
            i = 0; /* 报数到尾后i恢复为0 */
        }
    }
    while (*p == 0)
    {	    		   
        p++;
    }
    printf("%d个人中最后留下的是第%d号。", n, *p);

    return 0;
}	    		   

