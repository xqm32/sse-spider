#include<stdio.h>
int main()
{	 	 		  		   
    long i, start, end;
    int n, find = 0;
    double s, s0;
    printf("请输入n:");
    scanf("%d", &n);
    s = 0;
    s0 = (double)n + 1;
    for (i = 1; !find; i++)
    {	 	 		  		   
        s = s + 1.0 / i;
        if (s > n && s < s0)
        {	 	 		  		   
            start = i;
            s0 = s;
        }
        if (s > n + 1)
        {	 	 		  		   
            end = i - 1;
            find = 1;
        }
    }
    printf("满足不等式的m为:%ld<=m<=%ld\n", start, end);
    return 0;

}	 	 		  		   