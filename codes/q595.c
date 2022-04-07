#include <stdio.h>
main()
{	   	  	   	   
    int m, n;

    scanf("%d", &m);
    n = 0;
    do
    {	   	  	   	   
        m = m / 10;
        n++;
    }
    while (m != 0);

    printf("n=%d", n);
}	   	  	   	   

