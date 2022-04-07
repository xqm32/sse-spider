#include<stdio.h>
int main()
{	     
    int i, j, n;

    printf("Input n:\n");//1
    scanf("%d", &n);    //2

    for (i = 1; i <= n; i++) //6
    {	     
        for (j = 1; j <= 2 * i - 1; j++)  //6
        {	     
            printf("*");                  //4
        }
        printf("\n");                     //4
    }

    return 0;
}	     