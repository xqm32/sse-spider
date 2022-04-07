#include <stdio.h>

main()
{	    	 	 	 
    char ch;
    printf("Please input a low-case letter from keyboard:");
    ch = getchar();
    ch = ch - 32;
    printf("The capital letter and its ASCII value are:%c and %d.\n", ch , ch);
}	    	 	 	 