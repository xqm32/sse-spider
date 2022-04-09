#include <stdio.h>
#include <string.h>
#define ARR_SIZE 80
int main()
{	        	 	 
    char str[ARR_SIZE]; //1
    int  len, i, letter = 0, digit = 0, space = 0, others = 0; //1
    printf("Please input a  string:"); //1
    gets(str); //1
    for (i = 0; str[i] != '\0'; i++) //1
    {	        	 	 
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') //1
            letter ++;				//统计英文字符
        else if (str[i] >= '0' && str[i] <= '9' ) //1
            digit ++;				//统计数字字符
        else if (str[i] == ' ' ) //1
            space ++;				//统计空格
        else
            others ++;				//统计其他字符的个数
    } 
    printf("English character:  %d\n", letter); //1
    printf("digit character:  %d\n", digit); //1
    printf("space:  %d\n", space); //1
    printf("other character:  %d\n", others); //1
    return 0;
}	        	 	 