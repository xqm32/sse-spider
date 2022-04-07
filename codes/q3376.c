#include <stdio.h>
#include <string.h>         //1
#include <stdlib.h>
/*将一个字符串插入到另一个字符串中首次出现某字符的指定位置*/
int main()
{ 	 	   	   	 
    int i = 0, j = 0, n, len;
    char str1[200] = {'\0'};
    char str2[100];
    char strtem[100];
    char ch;
    printf("Input source string 1:\n");
    gets(str1);     //1
    printf("Input inserted string 2:\n");
    gets(str2);         //1
    printf("Input a letter to locate the index:\n");
    scanf(" %c", &ch);          //1
    len = strlen(str1);           //  1
    while (str1[i] != '\0')         //1
    { 	 	   	   	 
        if (str1[i] == ch)              //1
        { 	 	   	   	 
            n = i;
            break;     //1     
        }
        i++;
    }
    if (i != len)               //1
    { 	 	   	   	 
        for (i = n; str1[i] != '\0'; j++, i++)          //1
        { 	 	   	   	 
            strtem[j] = str1[i];            //1
            str1[i] = '\0';             //1
        }
        strtem[j] = '\0';                   //1
        strcat(str1, str2);             //1
        strcat(str1, strtem);               //1
        printf("The new string is:%s", str1);
    }
    else
    { 	 	   	   	 
        printf("Not found!");
    }

    return 0;
} 	 	   	   	 