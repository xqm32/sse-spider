#include <stdio.h>
#include <math.h>

int main()
{	   	   	 	 
    printf("%f", (ldexp(1.0, 128) / 1000000 / (365 * 24 * 60 * 60)));

    return 0;
}	   	   	 	 