#include <stdio.h>
#include <string.h>
#define N 80
void Inverse(char str[]);
main()
{  	 	  
    char a[N];
    printf("Input a string:\n");
    gets(a);//1
    Inverse(a);//2
    printf("Inversed results:\n");
    puts(a);//1
}  	 	  
void Inverse(char str[])
{  	 	  
    int   len, i, j;
    char  temp;//1
    len = strlen(str);//1
    for (i=0, j=len-1; i<j; i++, j--)//4
    {  	 	  
	temp = str[i];//1
        str[i] = str[j];//1
        str[j] = temp;//1
    }
}  	 	  