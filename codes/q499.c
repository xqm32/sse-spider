#include <stdio.h>

//检查是否全是数字构成的串
int checkNumber(char *str)
{	   	 	 	   		 
    int i;

    for (i = 0; i < strlen(str); i++)
    {	   	 	 	   		 
        if (str[i] < '0' || str[i] > '9')
        {	   	 	 	   		 
            return 0;
        }
    }
    return 1;
}	   	 	 	   		 

char *getNumberString()
{	   	 	 	   		 
    static char string[100];

    do
    {	   	 	 	   		 
        printf("请输入一个全为数字的字符串:\n");
        scanf("%s", string);
    }
    while (!checkNumber(string));
    return string;
}	   	 	 	   		 

int main(int argc, char *argv[])
{	   	 	 	   		 
    char input[100];

    strcpy(input, getNumberString());

    printf("你输入的正确的数字串为：%s\n", input);

    return 0;
}	   	 	 	   		 

