#include <stdio.h>
#define N 10
int main()
{	 	  
    int a[N], n;
    int i, j;
    printf("The size of array is:");
    scanf("%d", &n);
    printf("The elements of array are:\n");
    
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int key;
    for (i = 1; i < n; i++)
    {	 	  
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] < key)
        {	 	  
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    printf("The second largest number is:%d\n", a[1]);
    return 0;
}	 	  