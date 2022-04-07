#include <stdio.h>

main()
{	     	 
    double b;
    unsigned short a = 65535;
    unsigned short k = a;
    char c, d;
    char f, g;

    b = (1234.0 - 1) / 10;
    scanf("%c", &c);
    scanf("%c", &d);
    scanf("%c", &f);
    getchar();
    scanf("%c", &g);
    printf("%c,%c,%c,%c,%f,%u", c, d , f, g, b, k);
}	     	 


