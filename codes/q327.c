#include <stdio.h>
main()
{	    		     	 
    char c;
    printf("Enter a charactor:");
    c=getchar();
    if(c<0x20) printf("\nThe charactor is a control charactor.\n");
    else if(c>='0'&&c<='9')
        printf("\nThe charactor is a digit charactor.\n");
    else if(c>='A'&&c<='Z')
        printf("\nThe charactor is a capital charactor.\n");
    else if(c>='a'&&c<='z')
        printf("\nThe charactor is a lower charactor.\n");
    else
        printf("\nThe charactor is a other charactor.\n");
}	    		     	 
