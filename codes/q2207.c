#include <stdio.h>

int main()
{	 	   	  	 
    int a[2][3], b[3][2];
    int i, j;
    printf("Array a:\n");
    for (i = 0; i < 2; i++)
    {	 	   	  	 
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    }
    for (i = 0; i < 2; i++)
    {	 	   	  	 
        for (j = 0; j < 3; j++)
        {	 	   	  	 
            b[j][i] = a[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {	 	   	  	 
        int tmp = b[i][0];
        b[i][0] = b[i][1];
        b[i][1] = tmp;
    }
    printf("Array b:\n");
    for (i = 0; i < 3; i++)
    {	 	   	  	 
        for (j = 0; j < 2; j++)
        {	 	   	  	 
            printf("%4d", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}	 	   	  	 