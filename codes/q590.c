#include <stdio.h>
void trans(int n, int b[]);
int main()
{	   	   			 
    int b[16], n, i;
    for (i = 0; i <= 15; i++)
    {	   	   			 
        b[i] = 0;
    }
    printf("n=");
    scanf("%d", &n);
    trans(n, b);
    printf("the binary number is ");
    for (i = 15; i >= 0; i--)
    {	   	   			 
        printf("%d", b[i]);
    }
    printf("\n");
    return 0;
}	   	   			 
void trans(int n, int b[])
{	   	   			 
    int i = 0;
    while (n != 0)
    {	   	   			 
        b[i] = n % 2;
        i++;
        n /= 2;
    }
}	   	   			 

