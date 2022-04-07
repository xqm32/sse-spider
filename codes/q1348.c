#include <stdio.h>
#include <math.h>

int main()
{	        
    int i, salary, hours, a, b, c1, c2, c3;
    float m;
    scanf("%d %d", &salary, &hours);
    m = (float)salary / hours;
    a = (int)(m + 0.5);
    b = pow(a, 2);
    c3 = b % 10;
    c2 = (b % 100 - c3) / 10;
    c1 = (b % 1000 - c3 - c2 * 10) / 100;
    for (i = 0; b >= 1; i++)
    {	        
        b = b / 10;
    }
    printf("%.2f\n", m);
    printf("%d\n", a);
    printf("%d\n", i);
    printf("%d %d %d\n", c1, c2, c3);
    return 0;
}	        

