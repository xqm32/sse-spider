#include <stdio.h>
#include <string.h>
#define M 100005
int ans[M];

int main()
{	   	    		   
    int n, y, k;
    (scanf("%d%d%d", &y, &k, &n));
    {	   	    		   
        int i;
        int cnt = 0;
        for (i = 1; i * k <= n; i++)
        {	   	    		   
            if (i * k > y)
                ans[cnt++] = i * k - y;
        }
        if (cnt == 0)
        {	   	    		   
            printf("-1\n");
            return 0;
            //continue;
        }
        printf("%d", ans[0]);
        for (i = 1; i < cnt; i++)
            printf(" %d", ans[i]);
        printf("\n");
    }
    return 0;
}	   	    		   