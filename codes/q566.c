#include <stdio.h>
double fun(int i)
{	   	 	   	  
    int a, b, c, k;
    double s = 0.0;
    a = 2;
    b = 1;

    for (k = 0; k < i; k++)
    {	   	 	   	  
        s = s + (double)a / b;
        c = a;
        a = a + b;
        b = c;
    }
    return s;
}	   	 	   	  

main()
{	   	 	   	  
    int n;
    double sum;
    printf("请输入n的值：\n");
    scanf("%d", &n);
    sum = fun(n);
    printf("n项之和为：%lf\n", sum);
}	   	 	   	  

