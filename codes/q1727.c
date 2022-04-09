#include  <stdio.h>
int main(void)
{	       		  
    long i, m, n, sum = 0; //注意这里i必须声明为long类型
    printf("Please enter n:");
    scanf("%ld", &n);
    for (i = 1; ; i++)
    {	       		  
        sum = sum + i * i * i;
        if (sum >= n)
            break;
    }
    m = i - 1;
    printf("m<=%1d\n", m);
    return 0;
}	       		  