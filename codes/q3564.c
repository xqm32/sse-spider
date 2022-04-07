#include <stdio.h>
void main()
{ 		 		   
    int a, b;
    printf("enter value for a and b:");
    scanf("%d,%d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after sawpping the value of a and b: %d %d", a, b);

} 		 		   