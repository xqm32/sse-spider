#include <stdio.h>

main()
{	     	  
    char t, c1, c2;

    c1 = getchar();
    c2 = getchar();
    if (c1 > c2)
    {	     	  
        t = c1;
        c1 = c2;
        c2 = t;
    }
    printf("%c,%c", c1, c2);
}	     	  
