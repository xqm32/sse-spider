#include <stdio.h>
#include <string.h>
#define N 80
void MyStrcat(char *dstStr, char *srcStr);
main() {	 	      
    char s[N], t[N];
    printf("Input a string:\n");
    gets(s);
    printf("Input another string:\n");
    gets(t);
    MyStrcat(s, t);
    printf("Concatenate results:%s\n", s);
}	 	      
void MyStrcat(char *dstStr, char * srcStr) {	 	      
    while (*dstStr != '\0') 
    {	 	      
        dstStr++;
    }
    while (*srcStr != '\0') 
    {	 	      
        *dstStr = *srcStr;
        srcStr++;
        dstStr++;
    }
    *dstStr = '\0'; 
}	 	      