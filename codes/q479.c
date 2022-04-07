#include <stdio.h>

#define MASK 0xf  //MASK=(00001111)     

int main()
{	   	   		 
    int intNum, i, t;

    printf("请输入一个整数:");
    scanf("%d", &intNum);
    intNum >>= 8;
    intNum = intNum & MASK;
    printf("它的从右开始的第11-8位为:\n");
    for (i = 1; i <= 4; i++)
    {	   	   		 
        t = intNum;
        t >>= (4 - i);
        t = t & 1;
        printf("%d ", t > 0 ? 1 : 0);
    }

    return 0;
}	   	   		 