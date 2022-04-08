#include <stdio.h>
main()
{	    	  	
    int m,n,i;
    void pt();
    printf("Enter length:");
    scanf("%d",&n);
    for(i=n-1;i>=-n+1;i--)
    {	    	  	
        m=(i>0)?i:-i;
        pt(m,' ');
        if(i==n-1||i==-n+1)
        {	    	  	
            pt(n,'*');
            pt(1,'\n');
        }
        else
        {	    	  	
            pt(1,'*');
            pt(3*n-2*m-4,' ');
            pt(1,'*');
            pt(1,'\n');
        }
    }
}	    	  	
void pt(n,ch)
int n;char ch;
{	    	  	
    while(n-->0)
        printf("%c",ch);
}	    	  	
