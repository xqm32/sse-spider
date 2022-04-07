#include <stdio.h>

int range_test(int val, int low, int high)
{	 	 	   
    return (val >= low && val <= high);
}	 	 	   

int main()
{	 	 	   
    int val, low, high;

    printf("请输入数值、下界和上界：\n");
    scanf("%d%d%d", &val, &low, &high);

    printf("函数测试输出为%d！\n", range_test(val, low, high));
}	 	 	   