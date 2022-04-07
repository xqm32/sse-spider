#include <stdio.h>
int main()
{	   	  	 	  	
    char i, ch;
    for (i = 0; i < 6; i++)
    {	   	  	 	  	
        for (ch = 'A' + i; ch <= 'F'; ch++)
        {	   	  	 	  	
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}	   	  	 	  	

