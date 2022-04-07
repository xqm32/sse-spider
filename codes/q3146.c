#include<stdio.h>
int main()
{	   	 
    char ch;

    printf("Please enter a character:\n");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9')               //2
    {	   	 
        printf("It is a number.");
    }
    else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')//2
    {	   	 
        printf("It is an operator.");
    }
    else                                     //2
    {	   	 
        printf("It is another character.");
    }

    return 0;

}	   	 