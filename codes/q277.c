#include  <stdio.h>
#include  <string.h>
#define N 80           
void main()
{      	  
	int    n;
	char  str[N], min[N];	
	printf("Input five countries' names:\n");
	gets(str);//2                          
	strcpy(min, str);  //2                
	for (n=1; n<5; n++)//3
	{      	  
		gets(str); //2                     
		if (strcmp(str, min) < 0)    //4
		{      	  
			strcpy(min, str);  //2       
		}
	}
	printf("The minimum is:%s\n", min);//2
}      	  