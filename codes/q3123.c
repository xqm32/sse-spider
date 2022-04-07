#include <stdio.h>

int main()
{	    		   
    int number = 0;
    float price = 0;
    int year = 0;
    int month = 0;
    int day = 0;

    printf("Enter item number:\n");
    scanf("%d", &number);
    printf("Enter unit price:\n");
    scanf("%f", &price);
    printf("Enter purchase date (yy mm dd):\n");
    scanf("%d%d%d", &year, &month, &day);

    printf("Item      Unit     Purchase\n");
    printf("%-9d$%-9.2f%02d/%02d/%02d\n", number, price, month, day, year);

    return 0;
}	    		   