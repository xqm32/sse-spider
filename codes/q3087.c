#include <stdio.h>
#include <string.h>
char a[81], b[81];
int main()
{	    	  		 
    int maxlen, testlen, la;
    scanf("%s%s", a, b);
    la = strlen(a);
    maxlen = strlen(b);
    for (testlen = maxlen; testlen > 0; testlen--)
        if (!strncmp(b, a + la - testlen, testlen))
        {	    	  		 
            printf("%s\n", a + la - testlen);
            break;
        }
    return 0;
}	    	  		 