#include <stdio.h>
#include <string.h>
#define N 30
int main( )
{ 	  	 	 	  
    char  str[N], c;
    int  n, i, j;

    printf("Please Enter String1:\n");
    gets(str);              //1
    n = strlen(str) - 1;    //1

    for (i = 0; i <= n / 2; i++)  //2
    { 	  	 	 	  
        c = str[i];             //1
        str[i] = str[n - i];    //1
        str[n - i] = c;         //1
    }

    printf("Result is:\n%s\n", str);
    return 0;
} 	  	 	 	  