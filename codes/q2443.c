#include <stdio.h>
#include <string.h>

char *seconds_to(int seconds)
{	 	 	  
    static char time[100];

    sprintf(time, "%d小时%d分钟%d秒", seconds / 3600, seconds % 3600 / 60, seconds % 60);

    return time;
}	 	 	  

int main()
{	 	 	  
    int seconds;

    printf("请输入时间（秒）：\n");
    scanf("%d", &seconds);

    printf("%d秒合计%s！\n", seconds, seconds_to(seconds));
}	 	 	  