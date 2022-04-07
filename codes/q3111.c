#include <stdio.h>
void  Squeeze(char s[], char c);
int main()
{	      	   
    char  str[20], ch;
    printf("Input a string:\n");
    gets(str);
    printf("Input a character:\n");
    ch = getchar();
    Squeeze(str, ch);
    printf("Results:%s\n", str);
    return 0;
}	      	   
void  Squeeze(char s[], char c)
{	      	   
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++)//1
    {	      	   
        if (s[i] != c)//1
        {	      	   
            s[j] = s[i];//1
            j++;//1
        }
    }
    s[j] = '\0'; //1
}	      	   