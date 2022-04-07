#include <stdio.h>

int main()
{	     	
    char a;
    a = getchar();
    a = a - 32;
    printf("please input a lowercase:\n");
    printf("%c %d %d", a, a, sizeof(char));
    return 0;
}	     	

