#include<stdio.h>
int main()
{	    		 
    int i, j;
    int n;

    printf("Input n:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)          //1
        printf("%4d", i);
    printf("\n");                     //1

    for (i = 1; i <= n; i++)          //1
        printf("   -");
    printf("\n");                     //1

    for (i = 1; i <= n; i++)          //1
    {	    		 
        for (j = 1; j <= n; j++)      //1
            printf("%4d", i * j);
        printf("\n");                 //1
    }
    return 0;
}	    		 