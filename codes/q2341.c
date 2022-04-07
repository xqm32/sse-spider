#include <stdio.h>
#define N 80
int MyStrcmp(char *dstStr, char *srcStr);
int main()
{	 	        	
    int n;
    char s[N], t[N];
    printf("Input a string:");
    gets(s);
    printf("Input another string:");
    gets(t);
    n=MyStrcmp(s, t);
    if(n<0)
    {	 	        	
       printf("Bigger characters:%s\n", t);
    }else{	 	        	
       printf("Bigger characters:%s\n", t);
    }
    return 0;
}	 	        	
int MyStrcmp(char *dstStr, char *srcStr)
{	 	        	
	int flag=0;
    while (*srcStr != '\0'&&*dstStr!='\0')
    {	 	        	
        if(*dstStr == *srcStr)
        {	 	        	
            flag=0;
        }else if(* dstStr<* srcStr)
        {	 	        	
            return -1;
        }else {	 	        	
            return 1;
        }
        srcStr++;
        dstStr++;
    }
    if(*dstStr!='\0')
    {	 	        	
        return -1;
    }else if(*srcStr!='\0')
    {	 	        	
        return 1;
    }else{	 	        	
       return 0;
    }
}	 	        	