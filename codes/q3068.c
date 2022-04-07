#include <stdio.h>
int main()
{	    	   	 	 
    char  ch;
    printf("Input simple:\n");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
        printf("It is an English character.\n");
    else if (ch >= '0' && ch <= '9')
        printf("It is a digit character.\n");

    else
        printf("It is other character.\n");
    return 0;
}	    	   	 	 