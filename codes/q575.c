#include <stdio.h>
#include <stdlib.h>

int main()
{	   	 	 	 	 
    int x;
    int y;
    int b, c, d, e;
    scanf("%d", &x);
    b = x / 1000;
    c = (x - b * 1000) / 100;
    d = (x - 1000 * b - c * 100) / 10;
    e = x - 1000 * b - c * 100 - d * 10;
    y = 1000 * e + 100 * d + 10 * c + b;
    printf("%d", y);
    return 0;
}	   	 	 	 	 

