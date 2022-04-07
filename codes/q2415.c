#include <stdio.h>

int main()
{	 	 		   	 
    int age, heart_beats;

    printf("Please input your age: ");
    scanf("%d", &age);

    heart_beats = age * 365 * 24 * 60 * 75;

    printf("The heart beats in your life: %d", heart_beats);

    return 0;
}	 	 		   	 