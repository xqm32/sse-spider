//此算法为教案中的算法
#include<stdio.h>
#include<math.h>
#define N  100
int main()
{	 	 		  	  	 
    int i, j, line, a[N + 1];
    for (i = 2; i <= N; i++)
        a[i] = i;
    for (i = 2; i <= sqrt(N); i++)
    {	 	 		  	  	 
        for (j = i + 1; j <= N; j++)
        {	 	 		  	  	 
            if (a[i] != 0 && a[j] != 0 && a[j] % a[i] == 0)
            {	 	 		  	  	 
                a[j] = 0;
            }
        }
    }
    for (i = 2, line = 0; i <= N; i++)
    {	 	 		  	  	 
        if (a[i] != 0)
        {	 	 		  	  	 
            printf("%5d", a[i]);
            line++;
        }
        if (line == 10)
        {	 	 		  	  	 
            printf("\n");
            line = 0;
        }
    }
    return 0;
}	 	 		  	  	 