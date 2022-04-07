#include  <stdio.h>
int main(void)
{	          	 
    int i, n, sum = 0, counter = 0; //1
    printf("Input 20 Numbers:\n"); //1
    for (i = 0; i < 20; i++) //1
    {	          	 
        scanf("%d", &n);
        if (n >= 0)           	//判断是否为非负数
        {	          	 
            sum += n;          	//非负数求和
            counter++;         	//非负数个数计算
        }
    }
    printf("sum = %d, counter = %d\n", sum, counter); //1
    return 0;
}	          	 