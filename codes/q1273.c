#include<stdio.h>
void Cpy(char s[], char c[]);
main()
{	    	      
    char str1[80], str2[80];

    printf("输入一个字符串\n");
    gets(str1);

    Cpy(str1, str2); //改为：Cpy(str1, str2)

    printf("输出一个字符串\n");
    puts(str2);
}	    	      
void Cpy(char s[], char c[])
{	    	      
    int i, j = 0; //改为：j=0;

    for (i = 0; s[i] != '\0'; i++)
    {	    	      
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' ||
            s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || 
            s[i] == 'u' || s[i] == 'U')
            //将=改为：==
        {	    	      
            c[j] = s[i]; //改为:c[j] = s[i];
            j++;
        }
    }
    c[j] = '\0';
}	    	      

