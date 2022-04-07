#include <stdio.h>
#include <string.h>
#define N 100
void Insert(char s[]);
main()
{     	  	 
    char str[N];
    printf("Input a string:");
    gets(str);
    Insert(str);
    printf("\nInsert result:%s\n", str);
}     	  	 
void Insert(char s[])
{     	  	 
    char t[N];
    int  i, j;
    strcpy(t, s);
    for (i = 0, j = 0; t[i] != '\0'; i++, j++)
    {     	  	 
        s[j] = t[i];
        j++;
        s[j] = ' ';
    }
    s[j] = '\0';		/* 在字符串s的末尾添加字符串结束标志 */
}     	  	 