#include <stdio.h>

int main()
{	 	 		  
    double length, width, height;
    double area, volume;

    length = 11.5;
    width = 2.5;
    height = 10.0;

    area = 2 * (length * width + length * height + width * height);
    volume = length * width * height;

    printf("area=%.2f,volume=%.2f", area, volume);

    return 0;
}	 	 		  