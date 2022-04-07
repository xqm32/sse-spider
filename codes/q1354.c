#include <math.h>
#include <stdio.h>

// Judge if the palindromes that have been found are primes
int primer(int number)
{	     
    int i;
    int sqrt_number;
    sqrt_number = sqrt(number);
    for (i = 3; i <= sqrt_number; i += 2)
    {	     
        if ((number % i) == 0)
            return 0; //The number is not prime
    }
    return 1; // The number is prime
}	     

int main()
{	     
    int a, b; // Enter two numbers as the range of prime palindromes
    int x;
    int o, p, q, r, s;

    scanf("%d %d", &a, &b);

    if (a == 5 && 5 <= b)
        printf("%d\n", 5);
    if (a <= 7 && 7 <= b)
        printf("%d\n", 7);
    if (a <= 11 && 11 <= b)
        printf("%d\n", 11);
    // Find the prime palindromes in the range of 100 and 1000
    for (o = 1; o <= 9; o += 2)
        for (p = 0; p <= 9; p++)
        {	     
            x = 100 * o + 10 * p + o;
            if (primer(x) && x <= b && x >= a)
                printf("%d\n", x);
        }
    // Find the prime palindromes in the range of 10000 and 100000
    for (o = 1; o <= 9; o += 2)
        for (p = 0; p <= 9; p++)
            for (q = 0; q <= 9; q++)
            {	     
                x = 10000 * o + 1000 * p + 100 * q + 10 * p + o;
                if (primer(x) && x <= b && x >= a)
                    printf("%d\n", x);
            }
    // Find the prime palindromes in the range of 1000000 and 10000000
    for (o = 1; o <= 9; o += 2)
        for (p = 0; p <= 9; p++)
            for (q = 0; q <= 9; q++)
                for (r = 0; r <= 9; r++)
                {	     
                    x = 1000000 * o + 100000 * p + 10000 * q +
                        1000 * r + 100 * q + 10 * p + o;
                    if (primer(x) && x <= b && x >= a)
                        printf("%d\n", x);
                }
    // Find the prime palindromes in the range of 100000000 and 1000000000
    for (o = 1; o <= 9; o += 2)
        for (p = 0; p <= 9; p++)
            for (q = 0; q <= 9; q++)
                for (r = 0; r <= 9; r++)
                    for (s = 0; s <= 9; s++)
                    {	     
                        x = 100000000 * o + 10000000 * p + 1000000 * q +
                            100000 * r + 10000 * s + 1000 * r + 100 * q + 10 * p + o;
                        if (primer(x) && x <= b && x >= a)
                            printf("%d\n", x);
                    }

    return 0;
}	     