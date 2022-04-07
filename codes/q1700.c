#include <stdio.h>
int main()
{	       	     
    char ch;

    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') //1
    {	       	     
        ch = ch + 32;          //1
        printf("%c,%d", ch, ch); //1
    }
    else if (ch >= 'a' && ch <= 'z') //1
    {	       	     
        ch = ch - 32;         //1
        printf("%c,%d", ch, ch); //1
    }
    else
    {	       	     
        printf("Input error!");  //1
    }

    return 0;
}	       	     