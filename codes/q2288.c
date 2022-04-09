#include <stdio.h>
void  MyStrcpy(char *dstStr, char *srcStr);     //1
main()
{	 	 		   		 
    char  a[80], b[80];
    printf("Please enter a string:\n");
    gets(a);            //1
    MyStrcpy(b, a);         //1
    printf("The copy is:%s", b);
}	 	 		   		 
void  MyStrcpy(char *dstStr, char *srcStr)
{	 	 		   		 
    while (*srcStr != '\0')         //1
    {	 	 		   		 
        *dstStr = *srcStr;          //1
        srcStr++;           //1
        dstStr++;           //1
    }
    *dstStr = '\0';         //1
}	 	 		   		 