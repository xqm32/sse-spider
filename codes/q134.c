#include "stdio.h"
#include "string.h"
main()
{	  	    
    int i=0, findFlag=1;
    char x[13];
    char *str[13]= { "Pascal","Basic","Fortran", "Java","Visual C", "Visual Basic" };

    printf("Input string:\n");
    gets(x);

    while( i<6 && findFlag)
    {	  	    
        if(strcmp(x,str[i])==0)
        {	  	    
            findFlag = 0;
        }
        i++;
    }
    if ( !findFlag )
    {	  	    
        printf("%s\n",x);
    }
    else
    {	  	    
        printf("Not find!\n");
    }
}	  	    