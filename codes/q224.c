#include <stdio.h>
int main()
{		 		 	   
    int    fahr;
    float  celsius;

    for (fahr = -40; fahr <= 110; fahr = fahr + 10)  //3
    {		 		 	   
        celsius = 5.0f / 9 * (fahr - 32);             //2
        printf("%4d\t%6.1f\n", fahr, celsius);       //2
    }

    return 0;
}		 		 	   