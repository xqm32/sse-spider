#include <stdio.h>
int main()
{	   	 	  
    int a[5], b[5];
    int i, t;
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 5; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < 5; i++)
    {	   	 	  
        t = a[i];
        a[i] = b[i];
        b[i] = t;
    }
    for (i = 0; i < 5; i++)
        printf("%5d", a[i]);
    printf("\n");
    for (i = 0; i < 5; i++)
        printf("%5d", b[i]);
    printf("\n");
}	   	 	  

