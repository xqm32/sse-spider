#include <stdio.h>
#define ARR_SIZE 80
void MyStrcat(char dstStr[], char srcStr[]);
main()
{	 	 	   	  	   
	char  s[ARR_SIZE], t[ARR_SIZE];
	printf("Please enter source string:\n");
	gets(s); 
	printf("Please enter destination string:\n");
	gets(t);
	
	MyStrcat(t,s);
	printf("The concatenate string is:\n");
	puts(t);
}	 	 	   	  	   
void MyStrcat(char dstStr[], char srcStr[])
{	 	 	   	  	   
	int i = 0, j = 0;
	
	while (dstStr[i]!='\0')
	{	 	 	   	  	   
		i++;
	}
	for(;srcStr[j]!='\0';i++,j++)
	{	 	 	   	  	   
		dstStr[i] = srcStr[j];
	}
	dstStr[i]='\0';
}	 	 	   	  	   