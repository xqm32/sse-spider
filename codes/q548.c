#include  <stdio.h>

int  MyStrlen(char str[]);//2

int  MyStrlen(char str[])
{	   	 	 		   	 
    int  i ;
    int len = 0;   //3   
    for (i = 0; str[i] != '\0'; i++)//4
    {	   	 	 		   	 
        len++;      //2            
    }
    return (len);  //1             
}	   	 	 		   	 

int main()
{	   	 	 		   	 
    char   a[80];
    int  len;
    printf("Please enter a string:");//3
    gets(a);
    len = MyStrlen(a);   //3
    printf("The length of the string is: %d\n", len);//3
    return 0;
}	   	 	 		   	 