#include <stdio.h>
main()
{	    		   		 
    char ch;
    printf("****TIME****\n");
    printf("1.morning\n");
    printf("2.afternoon\n");
    printf("3.night\n");
    printf("Enter your choice:");
    ch = getchar();
    switch (ch)
    {	    		   		 
    case '1':
        printf("Good morning\n");
        break;
    case '2':
        printf("Good afternoon\n");
        break;
    case '3':
        printf("Good night\n");
        break;
    default:
        printf("Selection wrong\n");
    }
}	    		   		 