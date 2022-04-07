#include <stdio.h>

int main()
{	 	 		     
    double fahr, cels;

    printf("Please input cels: ");
    scanf("%lf", &cels);   //2

    fahr = 9.0 * cels / 5.0 + 32.0;   //2

    printf("The fahr is: %.2f", fahr);  //2
    return 0;
}	 	 		     