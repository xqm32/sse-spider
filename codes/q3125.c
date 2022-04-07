#include <stdio.h>
int main()
{	         	
    int a;
    printf("Please enter the number:\n");
    scanf("%d", &a);
    if (a < 0 || a >= 10000)
        printf("error!\n");
    else
    {	         	
        if (a < 10)
            printf("%d: 0-9\n", a);
        else if (a < 100)
            printf("%d: 10-99\n", a);
        else if (a < 1000)
            printf("%d: 100-999\n", a);
        else if (a < 10000)
            printf("%d: 1000-9999\n", a);
       
    }
 
    return 0;
 
}	         	