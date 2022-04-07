#include <stdio.h>
void fun (long s, long *t)
{	 	 	  
    int d;
    long sl = 1;
    *t = 0;
    while ( s > 0)
    {	 	 	  
        d = s % 10;
        if (d % 2 != 0)
        {	 	 	  
            *t = d * sl + *t;
            sl *= 10;
        }
        s /= 10;
    }
}	 	 	  
int main()
{	 	 	  
    long s, t;
    printf("Please enter s:\n");
    scanf("%ld", &s);
    fun(s, &t);
    printf("The result is: %ld\n", t);
    return 0;
}	 	 	  