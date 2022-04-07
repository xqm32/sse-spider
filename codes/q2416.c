#include <stdio.h>

int main()
{	 	 		 		 
    double fahr, cels;

    printf("Please input fahr: ");  //1
    scanf("%lf", &fahr);

    cels = 5.0 * (fahr - 32.0) / 9.0;  //2

    printf("The cels is: %.2f", cels);

    return 0;
}	 	 		 		 