#include <stdio.h>

int main(void)
{	 	 	  		 
    int num, num1, op;
    char ch;

    num = 0;
    num1 = 0;
    op = '+';
    do
    {	 	 	  		 
        ch = getchar();
        if (ch >= '0' && ch <= '9')
        {	 	 	  		 
            num1 = num1 * 10 + (ch - '0');
        }
        else
        {	 	 	  		 
            if (op == '+')
            {	 	 	  		 
                num = num + num1;
            }
            else if (op == '-')
            {	 	 	  		 
                num = num - num1;
            }
            else if (op == '*')
            {	 	 	  		 
                num = num * num1;
            }
            else if (op == '/')
            {	 	 	  		 
                num = num / num1;
            }
            else
            {	 	 	  		 
                printf("错误的运算符：%c", op);
                exit(0);
            }
            op = ch;
            num1 = 0;
        }
    }
    while (ch != '=');

    printf("%d", num);

    return 0;
}	 	 	  		 