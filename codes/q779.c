#include <stdio.h>
#include <stdlib.h>
void exchange(int a[5], int b[5]);

int main()
{	   	  		     
    int a[5], b[5], i;
    for (i = 0; i < 5; i++)  //1
    {	   	  		     
        scanf("%5d", &a[i]);
    }
    for (i = 0; i < 5; i++) //1  
    {	   	  		     
        scanf("%5d", &b[i]);
    }
    exchange(a, b);//1
    printf ("Output array a:");//1
    for (i = 0; i < 5; i++)//1
    {	   	  		     
        printf("%5d", a[i]);//1

    }
    printf("\n");
    printf ("Output array b:");//1
    for (i = 0; i < 5; i++)
    {	   	  		     
        printf("%5d", b[i]);//1
    }
    return 0;
}	   	  		     
void exchange(int a[5], int b[5])
{	   	  		     
    int i, temp;
    for (i = 0; i < 5; i++)//1
    {	   	  		     
        temp = a[i];//1
        a[i] = b[i];//1
        b[i] = temp;//1
    }
}	   	  		     
