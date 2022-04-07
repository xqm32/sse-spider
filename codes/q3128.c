#include  <math.h>
#include  <stdio.h>
int main()
{	        	  
    int  x, b0, b1, b2, b3, y;
    int a, b, z;
    printf("Input x:\n");
    scanf("%d", &x);
    x = (int)fabs(x);
    b3 =  x / 1000;
    b2 = (x - b3 * 1000) / 100;                   			/* 计算百位数字 */
    b1 = (x - b3 * 1000 - b2 * 100) / 10;     			/* 计算十位数字 */
    b0 = x % 10;                   			/* 计算个位数字 */
    y = b3 + b2 * 10 + b1 * 100 + b0 * 1000;
    printf("y=%d\n", y);

    a = y / 100;

    b = y % 100;
    printf("a=%d,b=%d\n", a, b);
    z = a*a + b*b;
    printf("result=%d\n", z);
    return 0;
}	        	  