#include <stdio.h>
#include <string.h>
#define N 100
void  Squeeze(char *s, char c);
void main()
{	  	   	  
	char  a[80], c, *s;
	gets(a);
	c = getchar();
	s = a;
	Squeeze(s, c);
	printf("%s\n", s);
}	  	   	  
void  Squeeze(char *s, char c)
{	  	   	  
	int i,j;

	for (i=j=0; s[i]!='\0'; i++)
	{	  	   	  
		if (s[i] != c)
		{	  	   	  
			s[j] = s[i];
			j++;
		}
	}
	s[j] = '\0';  /* 在字符串t2的末尾添加字符串结束标志 */
}	  	   	  