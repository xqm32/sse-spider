#include <stdio.h>
int main()
{	     	  
    char s0, s1, s2, s3;
    int a1, a2, a3;
    printf("input your English name:\n");
    scanf("%c%c%c", &s1, &s2, &s3);
    s0 = s1;
    s1 = s1 - 32;
    a1 = s0 - 'a' + 1;
    a2 = s2 - 'a' + 1;
    a3 = s3 - 'a' + 1;
    printf("%c%c%c\n", s1, s2, s3);
    printf("%c:%d\n", s0, a1);
    printf("%c:%d\n", s2, a2);
    printf("%c:%d\n", s3, a3);
    return 0;
}	     	  