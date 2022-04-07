#include <stdio.h>

int main()
{	      	  
    int i, result;
    for (i = 1; i <= 20; i++)
    {	      	  
        result = i * i;
        if (result > 100)
            break;
        else
            printf("%d*%d=%d\n", i, i, i * i);
    }
}	      	  