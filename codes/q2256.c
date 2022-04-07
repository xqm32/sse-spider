#include <stdio.h>
int main()
{	 	 		 	 	  	
    int a[10], i, sum = 0;           //1
    printf("input 10 numbers:");
    for (i = 0; i < 10; i++)         //1
        scanf("%d", &a[i]);          //1
    for (i = 0; i < 10; i++)         //1
    {	 	 		 	 	  	
        sum = sum + a[i];            //1
        i++;                         //1
    }
    printf("sum=%d\n", sum);         //1
    return 0;
}	 	 		 	 	  	