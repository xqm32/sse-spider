#include <stdio.h>
int main()
{	    	       
    float s = 100.0, h;
    h = s / 2;
    int n, i;
    printf("input:\n");
    scanf("%d", &i);
    if (i == 1)
    {	    	       
        printf("%d times:\n", i);
        printf("%.3f\n", s);
        printf("%.3f\n", h);
    }
    for (n = 2; n <= 15; n++)
    {	    	       
        s = s + 2 * h;
        h = h / 2;
        if (n == i)
        {	    	       
            printf("%d times:\n", i);
            printf("%.3f\n", s);
            printf("%.3f\n", h);
        }
    }
    return 0;

}	    	       