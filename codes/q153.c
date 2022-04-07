#include <stdio.h>
#include <string.h>
#define ARR_SIZE 80
main()
{	      
	char str[ARR_SIZE];
	int  len, i, letter, digit, space, others;
	letter=0;	digit=0;	space=0;	others=0;    	
    	gets(str);
    	len = strlen(str);
	for (i=0; i<len; i++)
	{	      
	  if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
          	letter ++;
         else if (str[i] >= '0' && str[i] <= '9')  
             	digit ++; 
         else if (str[i] == ' ') 
             	space ++; 
         else 
		others ++; 
    }
    printf("English character:  %d\n", letter);
    printf("digit character:  %d\n", digit);
    printf("space:  %d\n", space);
    printf("other character:  %d\n", others);
}	      
