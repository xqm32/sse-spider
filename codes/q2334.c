#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{	 	         	   
    int i;
    int n = 0;
    for (i = 100; i <= 200; i++)
    {	 	         	   
        if (i % 3 != 0 && i % 7 != 0)
        {	 	         	   
            printf("%6d", i);
            n++;
            if (n % 8 == 0)printf("\n");
        }
    }
    printf("\nNumbers are:%d\n", n);
}	 	         	   