#include <stdio.h>
main()
{	    		 	     
    unsigned int number;
    printf("Input the number:");
    scanf("%d",&number);
    do
    {	    		 	     
        printf("%d",number%10);
        number/=10;
    }while(number!=0);
    printf("\n");
}	    		 	     
