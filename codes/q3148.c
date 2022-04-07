#include<stdio.h>
int main()
{	   	  
    int i = 1, j;
    int n;

    printf("Input n:\n");
    scanf("%d", &n);

    while (i <= n)                   //1
    {	   	  
        printf("%4d", i);
        i++;
    }
    printf("\n");                    //1

    i = 1;
    while (i <= n)                   //1
    {	   	  
        printf("   -");
        i++;
    }
    printf("\n");                     //1

    for (i = 1; i <= n; i++)          //1
    {	   	  
        for (j = i; j <= n; j++)      //1
            printf("%4d", i * j);
        printf("\n");                 //1
    }
    return 0;
}	   	  