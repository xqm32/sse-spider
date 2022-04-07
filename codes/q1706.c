#include <stdio.h>
#include <math.h>
main()
{	       	   
    int i1, i2, i3, i4, k, n;
    printf("Input data is:");
    scanf("%d", &n);
    k = fabs(n);					//取绝对值
    i1 = k / 1000;					//分离出千位
    i2 = (k - i1 * 1000) / 100;				//分离出百位
    i3 = (k - i1 * 1000 - i2 * 100) / 10;	//分离出十位
    i4 = k % 10;					//分离出个位
    printf("The sum of the total bit is %d\n", i1 + i2 + i3 + i4);
}	       	   