#include<stdio.h>

int strend(char *s, char *t)
{   	   
    char *p = t;
    while(*s)
    {   	   
        p = t;
        while(*s++ != *p); /* new s value is one ahead of matched *p value */
        ++p; /*Lock step*/
        while(*s++ == *p++)
            if(*(s-1)=='\0' && *(p-1)=='\0')
                return 1; /*Both matched till the end, boundary condition*/
    }
    return 0;
}   	   

int main(void)
{   	   

    char s[128];
    char t[128];
    printf("please input the first str:\n");
    gets(s);
    printf("please input the second str:\n");
    gets(t);
    printf("%s\n",(strend(s,t))?"Matched":"Not Matched");
    return 0;
}   	   