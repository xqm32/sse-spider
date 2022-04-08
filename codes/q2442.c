#include <stdio.h>

int to_seconds(int hour, int minute, int second)
{	 	 	 	 
    return (hour * 60 * 60 + minute * 60 + second);
}	 	 	 	 

int main()
{	 	 	 	 
    int hour, minute, second;

    printf("请输入时间（时分秒三个整数）：\n");
    scanf("%d%d%d", &hour, &minute, &second);

    printf("%d小时%d分钟%d秒合计%d秒！\n", hour, minute, second, to_seconds(hour, minute, second));
}	 	 	 	 