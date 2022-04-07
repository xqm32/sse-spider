#include <stdio.h>
int main()
{	    	     	 
    int a, b, c;
    int counter = 1;
    printf("Please enter the number:\n");
    scanf("%d", &a);
    c = a;
    b = a / 10;
    while (b != 0)
    {	    	     	 
        counter++;
        a = b;
        b = a / 10;
    }

    printf("%d: %d bits\n", c, counter);
    return 0;

}	    	     	 