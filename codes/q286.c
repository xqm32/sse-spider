#include <stdio.h>
int Mystrlen(char str[]);  //2
main()
{ 
	char str[80];
	int len;
        printf ("Please input the string:\n");  
	gets(str);  //5
	len = Mystrlen(str);  //2
	printf("%d\n", len);  //2
}  	  
int Mystrlen(char str[])
{  	  
	int len = 0, i;
	for (i=0; str[i]!=0; i++)  //5
	{  	  
		len++;  //2
	}
	return len;  //2
}  	  