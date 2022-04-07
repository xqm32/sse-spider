#include <stdio.h>
#define LEN 10000 //1
int main(void)
{	  	     	 	   
    int i, k, m, n, s, p = 0; //1
    int a[100]; //1
    printf("Number as follew:");
    for (i = 2; i <= 10000; i++)
    {	  	     	 	   
        s = 0;
        m = 0;
        k = 1;
        while (k <= i / 2) //1
        {	  	     	 	   
            if (i % k == 0)
            {	  	     	 	   
                s = s + k;
                a[m] = k;
                m = m + 1;
            }
            k++; //1
        }
        if (s == i) //1
        {	  	     	 	   
            p = p + 1;
            printf("\n%d=%d", s, a[0]);
            n = 1;
            while (n < m) //1
            {	  	     	 	   
                printf("+%d", a[n]); //1
                n = n + 1;
            }
        }
    }
    printf("\nTotal Num： %d", p);
    return 0;
}	  	     	 	   