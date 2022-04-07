#include <stdio.h>
int main()
{	   	   	 
    int n, s;
    s = n = 0;
    while (s <= 1000)
    {	   	   	 
        ++n;
        s += n * n;
    }
    printf("n=%d\n", n - 1);
    return 0;
}	   	   	 

