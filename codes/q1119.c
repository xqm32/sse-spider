#include <stdio.h>

main()
{	   	      
    char s[] = "24635", c, i;

    for (i = 0; c = s[i]; i++)
    {	   	      
        switch (c - '0')
        {	   	      
        case 2:
        case 3:
            putchar(c + 4);
            break;
        case 4:
            putchar(c + 4);
            break;
        case 5:
            putchar(c + 3);
            break;
        default:
            putchar(c + 2);
        }
        putchar('\n');
    }
}	   	      

