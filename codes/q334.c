#define EOF -1
#include <stdio.h>
main()
{	    		 	 	 	 
    int c,nl,nc;
    nl=nc=0;
    while((c=getchar())!=EOF)
    {	    		 	 	 	 
        ++nc;
        if(c=='\n')
            ++nl;
    }
    printf("chars=%d, lines=%d\n",nc,nl);
}	    		 	 	 	 
