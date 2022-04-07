#include "stdio.h"
int Fun(int m);
int main()
{	     	 		 		 
    int m, flag;

    printf("Please input a number:\n");
    do
    {	     	 		 		 
        scanf("%d", &m); //1
    }
    while (m < 2); //e1

    flag = Fun(m); //3

    if (flag) //1
        printf("%d is a prime number\n", m);
    else
        printf("%d is not a prime number\n", m); //1

    return 0;
}	     	 		 		 
int Fun(int m)//2
{	     	 		 		 
    int i, flag = 1; //1

    for (i = 2; i < m; i++) //1
    {	     	 		 		 
        if (m % i == 0) //1
        {	     	 		 		 
            flag = 0; //1
            break;
        }
    }
    return flag;//2
}	     	 		 		 