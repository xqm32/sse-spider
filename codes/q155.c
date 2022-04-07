#include <stdio.h>
long fac(int n);
int main()
{	     
    int n;
    long res;
    printf("Input an integer:\n");
    scanf("%d", &n);                      //1
    if (n < 0) printf("Input Error!\n");
    else
    {	     
        res = fac(n);                      //1
        printf("%d! = %ld\n", n, res);
    }
    return 0;
}	     
long fac(int n)
{	     
    int i;
    long res = 1;             //1
    for (i = 1; i <= n; i++)         //1
    {	     
        res *= i;                      //1
    }
    return res;
}	     