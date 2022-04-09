#include <stdio.h>

int CountDigit(int number, int digit) //1

{	    		  	

    int count = 0;

    do

    {	    		  	

        if (digit == number % 10)   count++; //1

        number = number / 10; //1

    }
    while (number > 9);//1

    return count; //1

}	    		  	

int main()

{	    		  	

    int m, n;

    printf ("Input m,n:\n");

    scanf ("%d,%d", &m, &n);

    printf ("%d\n", CountDigit(m, n)); //1

    return 0;

}	    		  	