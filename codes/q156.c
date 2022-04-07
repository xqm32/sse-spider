#include <stdio.h>
#include <string.h>
int Mystrlen(char str[]);
main()
{	  		  
   char str[80];
   int l;
   printf("Enter a string:");
   gets(str);                       //1
   l=Mystrlen(str);           //1
   printf("The length of the string is:%d\n",l);
}	  		  
int Mystrlen(char str[])    //1
{	  		  
    int i;
    for(i=0;str[i]!='\0';i++)   //2
    {	  		  
    }
    return i;                   //1
}	  		  
