#include<stdio.h>
int main()
{	    	   	 	  
    int i, j, n;

    printf("Input n:\n");
    scanf("%d", &n);                    //1

    for (i = 1; i <= n; i++)            //1
    {	    	   	 	  
        for (j = 1; j <= n - i; j++)    //2
        {	    	   	 	  
            printf(" ");                //1
        }
        for (j = 1; j <= 6; j++)        //1
        {	    	   	 	  
            printf("*");                //1
        }
        printf("\n");                   //1
    }
}	    	   	 	  