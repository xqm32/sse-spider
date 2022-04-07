#include <stdio.h>
#include <math.h>
int main()
{	     	    
    float x, y, z;
    printf("Please input x and y:\n");
    scanf("%f,%f", &x, &y);

    z = pow(x, 2) + pow(y, 2);
    printf("result=%.2f\n", z);
    return 0;
}	     	    