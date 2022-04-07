#include <stdio.h>
int main()
{	    	 		  
    int i, j, n;

    printf("Input n:\n");
    scanf("%d", &n);                //1

    for (i = 1; i <= n; i++)            //2
    {	    	 		  
        for (j = 1; j <= i; j++)    //2
        {	    	 		  
            printf("%4d", i * j); //2
        }
        printf("\n");                 //2
    }
    return 0;
}	    	 		  