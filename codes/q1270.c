﻿#include <string.h>
#include <stdio.h>
main()
{	    	    	 
    int i = 0, findFlag = 0;
    char x[13];
    char str[][13] = { "Pascal", "Basic", "Fortran", "Java", "Visual C", "Visual Basic" };

    printf("请输入一个字符串:");
    gets( x );

    while (i < 6 && !findFlag)
    {	    	    	 
        if ( strcmp(x, str[i]) == 0 )
        {	    	    	 
            findFlag = 1;
        }
        i++;
    }

    if ( findFlag )
    {	    	    	 
        printf("%s\n", x);
    }
    else
    {	    	    	 
        printf("没找到!\n");
    }
}	    	    	 