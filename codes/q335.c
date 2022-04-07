#define EOF -1
#define YES 1
#define NO 0
#include <stdio.h>
main()
{	    		 	 	  
    int c,nl,nc,nw,inword;
    inword=NO;
    nl=nc=nw=0;
    while((c=getchar())!=EOF)
    {	    		 	 	  
        ++nc;
        if(c=='\n')
            ++nl;
        if(c=='\t'||c=='\n'||c==' ')
            inword=NO;
        else
            if(inword==NO)
            {	    		 	 	  
                inword=YES;
                ++nw;
            }
    }
    printf("Lines=%d\nWords=%d\nChars=%d\n",nl,nw,nc);
}	    		 	 	  
