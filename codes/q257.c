#include <stdio.h>
int CountWords(char str[]);
int main()
{     		  
    char  str[80];
    printf("Input a string:");
    gets(str);//1
    printf("Numbers of words = %d\n", CountWords(str));//1
    return 0;
}     		  
int CountWords(char str[])//1
{     		  
    int    i, num;
    num = (str[0] != ' ') ? 1 : 0;//1
    for (i = 1; str[i] != '\0'; i++)//1
    {     		  
        if (str[i] != ' ' && str[i - 1] == ' ')//1
        {     		  
            num++;//1
        }
    }
    return num;//1
}     		  