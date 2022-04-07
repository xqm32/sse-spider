#include <stdio.h>
#define SIZE 80
int MyStrcmp(char s[],char t[]);
main()
{ 		 	  
	char s[SIZE],t[SIZE],i;
	printf("Input s\n");
	gets(s);//1
	printf("Input t\n");
	gets(t);//1
	i=MyStrcmp(s,t);//2
	if(i>0)//1
		printf("string s>string t.\n");
	else if(i<0)//1
		printf("string s<string t.\n");
	else//1
		printf("string s=string t.\n");
} 		 	  
int MyStrcmp(char s[], char t[])
{ 		 	  
	int i;
	for (i=0; s[i] == t[i]; i++ ) //6
	{ 		 	  
    		if (s[i] ==  '\0' )  //2
			return 0 ;//2
	}
	return (s[i]-t[i]); //2
} 		 	  