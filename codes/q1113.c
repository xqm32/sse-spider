#include <math.h>
#include <stdio.h>

void fun(char *s, char *t, int *k)// 声明为指针类型 
{	   	  	   
    int i;
    *k = 0;
    for (i = 0; s[i]; i++)
        if ('0' <= s[i] && s[i] <= '9')
        {	   	  	   
            t[*k] = s[i];
            *k += 1;
        }
        t[*k] = '\0';//添加字符串结束标志
}	   	  	   

int main()
{	   	  	   
    char str[100], tOrigin[9];
    double n = 0;//改成double
    int i, k;
    printf("Please enter string s:");
    scanf("%s", str);
    fun(str, tOrigin, &k);
    for (i = 0; i < k; i++)
    {	   	  	   
        n += (tOrigin [k - 1 - i] - '0') * pow(10, i);
    }
    printf("The result is: %d", (int)n);//输出时再强转为int
    return 0;
}	   	  	   
