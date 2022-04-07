#include <stdio.h>
int CountWords(char str[]);
void main()
{	 	  			   	 
	char  str[80];
	int num;
        printf("Input a string:\n");
	gets(str);//2
	num=CountWords(str);//2
	printf("Number of words=%d\n", num);//2
}	 	  			   	 
int CountWords(char str[])
{	 	  			   	 
	int    i, num;
   	if(str[0]!=' ') //2
		num=1;//1
	else
		num=0;//1
	for (i=1; str[i]!='\0'; i++)//4
	{	 	  			   	 
		if (str[i]!=' ' && str[i-1] == ' ') //4
		{	 	  			   	 
			num++;//1
		}
	}
	return num;//1
}	 	  			   	 