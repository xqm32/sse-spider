#include <stdio.h>
#include <string.h>
#define N 80
void Inverse(char str[]);
int main()
{	   		         
    char a[N]; //1
    printf("Input a string:"); //1
    gets(a); //1
    Inverse(a); //1
    printf("Inversed results:%s\n", a); //1
    return 0;
}	   		         
/* 函数功能： 实现将字符数组中的字符串逆序存放 */
void Inverse(char str[])
{	   		         
    int   len, i, j; //1
    char  temp; //1
    len = strlen(str); //1
    for (i = 0, j = len - 1; i < j; i++, j--) //1
    {	   		         
        temp = str[i]; //1
        str[i] = str[j]; //1
        str[j] = temp; //1
    }
}	   		         