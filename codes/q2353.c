#include <stdio.h>
#define N 10
void fun(int aa[])
{	 	    	 	
    int i, t;
    int max = 0;
    int min = 0;
    for (i = 0; i < N; i++)
    {	 	    	 	
        if (aa[i] > aa[max])
            max = i;
        if (aa[i] < aa[min])
            min = i;
    }
    t = aa[max];
    aa[max] = aa[min];
    aa[min] = t;
}	 	    	 	
main()
{	 	    	 	
    int i;
    int aa[N] = {44, 55, 62, 42, 35, 52, 78, 95, 66, 73};
    printf("\n***original list***\n");
    for (i = 0; i < N; i++)
        printf("%4d", aa[i]);
    fun(aa);
    printf("\n***new list***\n");
    for (i = 0; i < N; i++)
    {	 	    	 	
        printf("%4d", aa[i]);
    }

}	 	    	 	