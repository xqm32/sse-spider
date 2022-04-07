#include <stdio.h>
#include  <math.h>
main()
{ 
	float  a, b, c;                 
	float  s, area;                

	printf("Input a,b,c:");
	scanf("%f,%f,%f",&a,&b,&c);	//1

	s = 1.0 / 2 * (a + b + c);	//1
	area = sqrt(s * (s - a) * (s - b) * (s - c));	//1

	printf("area=%.2f\n", area);	//1
}		 	    