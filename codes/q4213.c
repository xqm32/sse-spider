#include <stdio.h>
int main()
{		 	       	   
    int H, M, N, time = 1;
    int count = 1;//1
    int flag = 0;//1
    printf("请输入H,M,N:\n");//1
    scanf("%d,%d,%d", &H, &M, &N);//1
    if (H <= 0 || M <= 0 || N < 0 || M <= 3 * N)//2
    {		 	       	   
        printf("您当前输入的数据不正确！");//1
        return 0;//1
    }

    flag = flag + M;//1
    while (flag <= H)//e1
    {		 	       	   

        flag = flag - N + M;//1
        time = 0;//1
        if (flag <= H)//1
        {		 	       	   
            flag = flag - 2 * N + M;//1
            time = 1;//1
            count++;//1
        }
        else//1
        {		 	       	   
            break;//1
        }
    }

    if (time == 1)//1
        printf("气球第%d天早上被吹爆", count);//1
    else//1
        printf("气球第%d天中午被吹爆", count);//1
    return 0;
}		 	       	   