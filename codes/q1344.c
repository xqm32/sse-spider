#include <stdio.h>
#include <math.h>

int sum_prime(int a[]);
int prime(int n);

int main()
{	      		 
    int i, a[10], sum;
    sum = sum_prime(a);
    for (i = 0; i < 10; i++)
        printf("%6d", a[i]);
    printf("\n sum=%d\n", sum);
    return 0;
}	      		 

int sum_prime(int a[])
{	      		 
    int i, j = 499, sum = 0;
    for (i = 0; i < 10; )
    {	      		 
        if (prime(j))
        {	      		 
            sum = sum + j ;
            a[i] = j;
            i++;
        }
        j--;
    }
    return sum;
}	      		 
int prime(int n)
{	      		 
    int i, k;
    k = (int) sqrt((double)n);
    for (i = 2; i <= k; i++)
    {	      		 
        if (n % i == 0)
            return 0;
    }
    if (i >= k + 1)
        return 1;

}	      		 