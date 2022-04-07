#include <stdio.h>
#include <math.h>
int main()
{	     	
    int w, h, b;
    float t, a;
    printf("Input weight, height:\n");
    scanf("%d,%d", &w, &h);
    a = h / 100.0;
    b = w * 2;
    t = (float)w / (a * a);
    printf("weight=%d\n", b);
    printf("height=%.2f\n", a);
    printf("t=%.2f\n", t);
    return 0;
}	     	