﻿#include <stdio.h>
main()
{		   	   	 
    char  ch;
    printf("Press a key and then press Enter:");
    ch = getchar();
    if (ch >= 'A' && ch <= 'Z')
    {		   	   	 
        ch = ch + 32;
    }
    else if (ch >= 'a' && ch <= 'z')
    {		   	   	 
        ch = ch - 32;
    }
    printf("%c, %d\n", ch, ch);
}		   	   	 

