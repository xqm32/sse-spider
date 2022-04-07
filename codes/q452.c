#include <stdio.h>

int main()
{	   	   		 
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    if (n > 0)
    {	   	   		 
        printf("+\n");
    }
    else if (n < 0)
    {	   	   		 
        printf("-\n");
    }
    else
    {	   	   		 
        printf("this number has no sign\n");
    }
}	   	   		 