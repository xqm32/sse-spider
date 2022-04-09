#include<stdio.h>
int LCM(int a, int b)
{	   	 	     	   
    long int c;
    int d;
    if (a < b)
    {	   	 	     	   
        c = a;
        a = b;
        b = c;
    }
    for (c = a * b; b != 0;)
    {	   	 	     	   
        d = b;
        b = a % b;
        a = d;
    }
    return (int)c / a;
}	   	 	     	   
int main()
{	   	 	     	   
    int i, j, k, l, m, n, lcm;
    printf("Input two fractions\n");
    scanf("%d/%d,%d/%d", &i, &j, &k, &l);
    lcm = LCM(j, l);
    m = lcm / j * i;
    n = lcm / l * k;
    if (m > n)
        printf("%d/%d>%d/%d\n", i, j, k, l );
    else if (m == n)
        printf("%d/%d=%d/%d\n", i, j, k, l );
    else
        printf("%d/%d<%d/%d\n", i, j, k, l );

    return 0;
}	   	 	     	   