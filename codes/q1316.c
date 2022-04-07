#include <stdio.h>

int main()
{	      	   
    char str[80], c[80];
    void cpy();

    printf("\n输入字符串：");
    gets(str);
    printf("%s", str);
    cpy(str, c);
    printf("\n字符串中的元音字母是%s", c);

    return 0;
}	      	   

void cpy(char s[], char c[])
{	      	   
    int i, j;

    for (i = 0, j = 0; s[i] != '\0'; i++)
    {	      	   
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' ||
                s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' ||
                s[i] == 'u' || s[i] == 'U')
        {	      	   
            c[j] = s[i];
            j++;
        }
    }
    c[j] = '\0';
}	      	   