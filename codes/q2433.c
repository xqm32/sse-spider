#include <stdio.h>

int main()
{	 	   	  
    float litres[] = {11.5, 11.21, 12.7, 12.6, 12.4};
    float miles[] = {471.5, 358.72, 495.3, 453.6, 421.6};
    int mpl[5];  // Miles per litre.
    int *p;
    float *pl, *pm;

    pl = litres;
    pm = miles;
    for (p = mpl; p < mpl + (sizeof(mpl) / sizeof(int)); p++)
    {	 	   	  
        *p = (int)(*pm / *pl);
        printf("%d\t", *p);
        pm++;
        pl++;
    }

    return 0;
}	 	   	  