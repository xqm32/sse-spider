#include<stdio.h>
int main()
{	  	   
    int i, j, count;
    int n;

    printf("Input n:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) //1
    {	  	   
        printf("%4d", i);
    }
    printf("\n");

    for (i = 1; i <= n; i++) //1
    {	  	   
        printf("   -");
    }
    printf("\n");

    for (i = 1; i <= n; i++) //1
    {	  	   
        count = 1;           //1
        while (count < i)    //1
        {	  	   
            printf("    ");
            count++;         //1
        }
        for (j = i; j <= n; j++) //1
        {	  	   
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}	  	   