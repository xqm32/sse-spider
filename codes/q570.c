#include<stdio.h>
int main()
{	   	 	       
    int a, b, c, counter;
    counter = 0;
    for (a = 1; a < 5; a++)
        for (b = 1; b < 5; b++)
            for (c = 1; c < 5; c++)
            {	   	 	       
                if (a != b && b != c && a != c)
                    counter++;
            }
    printf("counter=%d\n", counter);

    for (a = 1; a < 5; a++)
        for (b = 1; b < 5; b++)
            for (c = 1; c < 5; c++)
            {	   	 	       
                if (a != b && b != c && a != c)
                    printf("%d%d%d ", a, b, c);
            }
    return 0;
}	   	 	       

