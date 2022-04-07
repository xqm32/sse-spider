#include <stdio.h>

int main()
{	 	     	  
    int hour, minute;

    printf("请输入爱尔兰当地时间（24小时制，如22：35）: ");
    scanf("%d:%d", &hour, &minute);

    printf("对应的华盛顿时间为%d:%d\n", (hour - 5 + 24) % 24, minute);
    printf("对应的莫斯科时间为%d:%d\n", (hour + 3) % 24, minute);
    printf("对应的北京时间为%d:%d\n", (hour + 7) % 24, minute);

    return 0;
}	 	     	  