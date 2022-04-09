#include <stdio.h>
double fac(int m, int n)
{	   	 	    
    int i;
    long p = 1, q = 1, r = 1;
    double d = 0.0;
    for (i = 1; i <= m; i++)
    {	   	 	    
        p = p * i;
    }
    for (i = 1; i <= n; i++)
    {	   	 	    
        q = q * i;
    }
    for (i = 1; i <= m - n; i++)
    {	   	 	    
        r = r * i;
    }
    d = (double)p / (r * q);
    return d;
}	   	 	    

main()
{	   	 	    
    int n, m;
    double d;
    do
    {	   	 	    
        printf("请输入m,n的值( m>n )：\n");
        scanf("%d %d", &m, &n);
    }
    while (m < n);
    d = fac(m, n);
    printf("n项之和为：%lf\n", d);
}	   	 	    

