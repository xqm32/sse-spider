#include<string.h>
#include<stdio.h>

#define ARR_SIZE 80

void Inverse(char str[]);

main()
{	     	   
	char a[ARR_SIZE] ;

	printf("Please enter a string: ");
	gets(a);
	Inverse(a);
	printf("The inversed string is: ");
	puts(a);
}	     	   

void Inverse(char str[])
{	     	   
	int   len, i, j;
	char  temp; 

    len = strlen(str);
    for (i=0, j=len-1; i<j; i++, j--)
	{	     	   
	temp = str[i];
        str[i] = str[j];         
        str[j] = temp;
	}
}	     	   
