#include <stdio.h>

int main()
{	   	 	  	  	 
    int m, k, i, n = 0;//n为累加质数个数

    for (m = 2; m <= 100; m++)
    {	   	 	  	  	 
        k = m - 1;
        for (i = 2; i <= k; i++)
            if (m % i == 0)
                break;
        if (i <= k)
            continue;
        n++;
        printf("%3d", m);
        if (n % 5 == 0)  //如果本行已经打印5个质数，换行
            printf("\n");
    }

    return 0;
}	   	 	  	  	 