#include <stdio.h>
#include <string.h>
#define N 80
void MyStrcat(char dstStr[], char srcStr[]);
int main()
{	   		     
    char  s[N], t[N];
    printf("Input a string:"); //1
    gets(s); //1
    printf("Input another string:"); //1
    gets(t); //1
    MyStrcat(s, t); //1
    printf("Concatenate results:%s\n", s); //1
    return 0;
}	   		     
/*  函数功能：将字符串srcStr连接到字符串dstStr之后 */
void MyStrcat(char dstStr[], char srcStr[])
{	   		     
    unsigned int  i, j; //1
    i = strlen(dstStr);               /* 将下标移动到字符串dstStr的末尾 */
    for (j = 0; j <= strlen(srcStr); j++, i++) //1
    {	   		     
        dstStr[i] = srcStr[j]; //1
    }
}	   		     