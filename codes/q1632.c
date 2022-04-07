#include <stdio.h>
#include <string.h>
#define N 80
void Inverse(char str[], char ptr[]);
int main()
{	   		     		 
    char a[N], b[N];
    printf("Input a string:"); //1
    gets(a); //1
    Inverse(a, b); //1 //1
    printf("Inversed results:%s\n", b); //1
    return 0;
}	   		     		 
/* 函数功能： 实现将字符数组中的字符串逆序存放 */
void Inverse(char str[], char ptr[])
{	   		     		 
    int   len, i, j; //1
    len = strlen(str); //1 
    for (i = 0, j = len - 1; str[i] != '\0'; i++, j--) //1
    {	   		     		 
        ptr[j] = str[i]; //1
    }
    ptr[i] = '\0'; /* 在字符串ptr的末尾添加字符串结束标志 */
}	   		     		 