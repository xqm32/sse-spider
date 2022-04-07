#include <stdio.h>

int main()
{	       
    int day, x1, x2;

    day = 10;
    x2 = 1;
    while (day > 1)
    {	       
        x1 = (x2 + 1) * 2; /* 第1天的桃子数是第2天桃子数加1后的2倍 */
        x2 = x1;
        day--;
    }
    printf("桃子总数=%d\n", x1);

    return 0;
}	       