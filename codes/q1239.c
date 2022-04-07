#include <stdio.h>

main()

{	    	  	 	 

    double term, result = 1;

    int n;

    for (n = 2; n <= 200; n = n + 2)

    {	    	  	 	 

        term = (double)( n * n) / (( n - 1) * ( n + 1));

        result = result * term;

    }

    printf("result = %lf\n", 2 * result);
}	    	  	 	 