#include <stdio.h>

char call_times()
{	 	 		 
    static int count = -1;
    count++;

    return (char)('A' + count);
}	 	 		 

int main()
{	 	 		 
    printf("第一次调用返回字符%c!\n", call_times());
    printf("第二次调用返回字符%c!\n", call_times());
    printf("第三次调用返回字符%c!\n", call_times());
}	 	 		 