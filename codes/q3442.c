#include <stdio.h>
#include <stdlib.h>

#define N 80                   //1
char * MyStrcat(char *dstStr, char *srcStr);

int main()
{ 	  		 
    char first[2 * N];  	/*large enough!*/
    char second[N];
    char *result = NULL;
    printf("Input the first string\n");
    gets(first);
    printf("Input the second string\n");
    gets(second);
    result = MyStrcat( first, second );     //1
    printf("The result is %s\n", result);
    return 0;

} 	  		 

/* return *pointer is of great importance to chaining expression p. 294 */
char * MyStrcat(char *dstStr, char *srcStr)   /*pointer as parameter, return pointer*/
{ 	  		 
    char *pStr = dstStr;
    while ( *dstStr != '\0')            //1
    { 	  		 
        dstStr++;
    }
    for (  ; *srcStr != '\0';  dstStr++, srcStr++ )
    { 	  		 
        *dstStr = *srcStr;              //1
    }
    *dstStr = '\0';
    return pStr;			//1
} 	  		 