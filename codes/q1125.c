#include <stdio.h>

int fun(char *s, char *t)
{	     		  
    int n;
    char *p, *r;
    n = 0;
    while (*s)
    {	     		  
        p = s;
        r = t;
        while (*r)
            if (*r == *p)
            {	     		  
                r++;
                p++;
            }
            else  break;
        if (*r == '\0')
            n++;
        s++;
    }
    return n;
}	     		  

main()
{	     		  
    char s[100], t[100];
    int m;

    printf("\nPlease enter string s: ");
    scanf("%s", s);
    printf("\nPlease enter substring t:");
    scanf("%s", t);
    m = fun(s, t);
    printf("\nThe result is: m=%d\n", m);
}	     		  

