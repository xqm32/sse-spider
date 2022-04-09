#include <stdio.h>
struct node
{	    	    	   
    int no_out;
    int nextp;
}	    	    	    link[31];
int main()
{	    	    	   
    int i, j, k;
    printf("The original circle is (+:papandom,  @:christian);\n");
    for (i=1; i<=30; i++)
    {	    	    	   
        link[i].no_out = 1;
        link[i].nextp = i + 1;
    }
    link[30].nextp = 1;
    j = 30;
    for (i=0; i<15; i++)
    {	    	    	   
        k = 0;
        while (1)
        {	    	    	   
            if (k < 9)
            {	    	    	   
                j = link[j].nextp;
                k += link[j].no_out;
            }
            else break;
        }
        link[j].no_out = 0;
    }
    for (i=1; i<=30; i++)
    {	    	    	   
        printf("%c ", link[i].no_out ? '@' : '+');
    }
    printf("\n");
    return 0;

}	    	    	   
