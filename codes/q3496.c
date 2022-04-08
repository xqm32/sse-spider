#include <stdio.h>
#include <stdlib.h>

int main()
{  		 
    int i, a[10], max, min, maxPos = 0, minPos = 0, temp;
    printf("Input 10 numbers:");
    for (i = 0; i < 10; i++)
    {  		 
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    for (i = 1; i < 10; i++)
    {  		 
        if (a[i] > max) //1
        {  		 
            max = a[i];
            maxPos = i;
        }
        if (a[i] < min) //1
        {  		 
            min = a[i];
            minPos = i;
        }
    }
    printf("Max element position:%d,Max element:%d\n", maxPos, max); //1
    printf("Min element position:%d,Min element:%d\n", minPos, min); //1

    temp = a[maxPos];
    a[maxPos] = a[minPos];
    a[minPos] = temp;

    printf("Exchange results:"); //1
    for (i = 0; i < 10; i++)
    {  		 
        printf("%4d", a[i]);//1
    }
    printf("\n");
    return 0;
}  		 