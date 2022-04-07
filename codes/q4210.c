#include <stdio.h>
int main()
{		 	   		 
    int H, M, N, count, flag;//1
 
    printf("请输入H,M,N:\n");//1
    scanf("%d,%d,%d", &H, &M, &N);//2
    if (H <= 0 || M <= 0 || N < 0 || M <= N)//4
    {		 	   		 
        printf("您当前输入的数据不正确！");//1
        return 0;//1
    }
    count = 1;//1
    flag = M;//1
    while (flag <= H)//4
    {		 	   		 
        flag -= N;//1
        count++;//1
        flag += M;//1
    }
    printf("气球第%d天被吹爆。", count);//1
    return 0;
}		 	   		 