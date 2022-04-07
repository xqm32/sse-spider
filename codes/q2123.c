#include <stdio.h>
#define BUFFER_SIZE 80
#define COUNT_SIZE 26
main( )
{	 	  	  	   	 
    char str[BUFFER_SIZE+1];  //2
    int count[COUNT_SIZE]={0}; //2
    int i = 0;
    gets(str); //2
    for(i=0; str[i]!='\0'; i++)  //1
    {	 	  	  	   	 
        if((str[i]>='a') && (str[i]<='z')) //2
            count[str[i]-'a']++;  //4
    }

    for(i=0; i<COUNT_SIZE; i++) //1
    {	 	  	  	   	 
        if(count[i]>0) //1
        {	 	  	  	   	 
             printf("%c=%d\n", i+'a', count[i]); //2
        }
    }
}	 	  	  	   	 