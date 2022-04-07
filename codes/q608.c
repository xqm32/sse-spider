#include <stdio.h>
int main()
{	   	  	 	  
    short int d, m, c, n;
    scanf("a = %3hd%4hd, b = %3hd%4hd", &d, &m, &c, &n);
    printf("a + b = %d", (d + c) * 10000 + m + n);
    return 0;
}	   	  	 	  

