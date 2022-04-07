#include "stdio.h"

int main()
{	 	     		  
    int arr[10], brr[10];
    int i, j, tmp;

    printf("Input 10 numbers:");
    for (i = 0; i < 10; i++)
    {	 	     		  
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 9; i++)
    {	 	     		  
        for (j = i + 1; j < 10; j++)
        {	 	     		  
            if (arr[j] < arr[i])
            {	 	     		  
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for (i = 0, j = 0; i < 10; i++)
    {	 	     		  
        if (arr[i] % 2 == 1)
        {	 	     		  
            brr[j++] = arr[i];
        }
    }
    for (i = 0; i < 10; i++)
    {	 	     		  
        if (arr[i] % 2 == 0)
        {	 	     		  
            brr[j++] = arr[i];
        }
    }

    printf("Output: ");
    for (i = 0; i < 10; i++)
    {	 	     		  
        if (i < 9)
        {	 	     		  
            printf("%d,", brr[i]);
        }
        else
        {	 	     		  
            printf("%d\n", brr[i]);
        }
    }
}	 	     		  