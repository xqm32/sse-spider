#include <stdio.h>
int MyStrcmp(char s[], char t[]);	
main()
{	     	  		 	 
	char  str1[20],str2[20];
	printf("Input string:");
	gets(str1);
	printf("Input another string:");
	gets(str2);		
	if (MyStrcmp(str1,str2) > 0)
	{	     	  		 	 
	    printf("str1 大于 str2\n");
	}
	else if (MyStrcmp(str1,str2) < 0)
	{	     	  		 	 
	    printf("str1 小于 str2\n");
	}
	else
	{	     	  		 	 
	    printf("str1 等于 str2\n");
	}
}	     	  		 	 

int MyStrcmp(char s[], char t[]) 
{	     	  		 	 
	int i;

	for (i=0; s[i] == t[i]; i++)   			
	{	     	  		 	 
    		if (s[i] == '\0' )  return 0 ;	
	}
	return (s[i] - t[i]);
}	     	  		 	 
