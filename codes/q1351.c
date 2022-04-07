#include <stdio.h>

#define PI	3.14159
#define RATE	0.001
#define NEED	20

int main()
{	    	   
    int h, r;
    double volum;

    printf("please input the height and the radius:\n");
    scanf("%d,%d", &h, &r);

    volum = PI * r * r * h * RATE;
    printf("%d", (int)(20 / volum) + 1);

    return 0;
}	    	   

