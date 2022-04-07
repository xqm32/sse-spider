#include  <stdio.h>
unsigned int  MyStrlen(char *pStr);      //1
int main()
{ 	  	   	   
	char   a[80];
	unsigned int  len;
	printf("Please enter a string:");
	gets(a);                  //1
	len = MyStrlen(a);      //1
	printf("The length of the string is: %u\n", len); 
	return 0;
} 	  	   	   
/* 函数功能：用字符指针作函数参数，计算字符串的长度 */
unsigned int  MyStrlen(char *pStr)
{ 
	unsigned int  len = 0;   //1
	for ( ; *pStr!='\0'; pStr++)   //2  
	{ 	  	   	   
		len++;                 
	}
	return (len);       //1      
} 	  	   	   