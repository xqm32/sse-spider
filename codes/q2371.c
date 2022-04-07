#include  <stdio.h>
#define N  10
void  MaxMinExchang(int *a, int n);
int main()
{	 	 	   	
    int a[N], i, n;
    
    printf("Input n(n<=10):\n");
    scanf("%d", &n) ;
    
    printf("Input %d Numbers:\n", n);
    for (i = 0; i < n; i++)
    {	 	 	   	
        scanf("%d", &a[i]);
    }
    
    MaxMinExchang(a, n);
    
    printf("After MaxMinExchange:\n");
    for (i = 0; i < n; i++)
    {	 	 	   	
        printf("%d ", a[i]);
    }
    return 0;
}	 	 	   	
void  MaxMinExchang(int *a, int n)
{	 	 	   	
    int  maxValue , minValue , maxPos, minPos;
    int  i, temp;
    maxValue = minValue = *a;
    maxPos = minPos = 0;
    for (i = 1; i < n; i++)
    {	 	 	   	
        if (*(a + i) > maxValue)
        {	 	 	   	
            maxValue = *(a + i);
            maxPos = i;
        }
        if (*(a + i) < minValue)
        {	 	 	   	
            minValue = *(a + i);
            minPos = i;
        }
    }
    temp = *(a + maxPos);
    *(a + maxPos) = *(a + minPos);
    *(a + minPos) = temp;
}	 	 	   	