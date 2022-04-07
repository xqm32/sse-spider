#include <stdio.h>
int MyStrcmp(char s[], char t[], char bigger[]);
int main()
{ 	  	   
    char  str1[20], str2[20], str3[20];
    int diff;
    printf("Input string:");
    gets(str1);
    printf("Input another string:");
    gets(str2);
    diff = MyStrcmp(str1, str2, str3); //1
    printf("The bigger string is:%s\n", str3); //1
    printf("The differ of the strings is:%d\n", diff);
    return 0;
} 	  	   

int MyStrcmp(char s[], char t[], char bigger[])
{ 	  	   
    int i, result = 0;
    int len1 = 0, len2 = 0;
    while (s[len1++] != '\0');
    while (t[len2++] != '\0');
    for (i = 0;  s[i] == t[i] && s[i] != '\0' && t[i]!='\0'; i++); //1
    if (i==0 || s[i - 1] != '\0' ) //1
        result = s[i] - t[i]; //1
    if (result >= 0)
        for (i = 0; i < len1; i++)
            bigger[i] = s[i];
    else
        for (i = 0; i < len2; i++)
            bigger[i] = t[i];
    return result;
} 	  	   