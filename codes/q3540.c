#include <stdio.h>
#include<math.h>
main()
{   	 		   
    int x;
    float y;
    printf("请输入整数x：\n");
    scanf("%d", &x);
    if (x >= -100 && x <= -10)
        y = x + 2;
    else if (x > -10 && x < 0)
        y = (-1.0) / 2 * pow(x, 2);
    else if (x >= 0 && x < 100)
        y = 5 * pow(x, 3) + 1.0 / 5 * x + 1;
    else if (x >= 100 || x < -100)
        y = 7 * fabs(x) + 9;

    printf("输入X=%d 由分段函数求得y的值为 %.2f", x, y);
}   	 		   