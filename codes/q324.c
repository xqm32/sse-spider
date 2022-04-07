#include <stdio.h>
#include <math.h>
main()
{	    		   	 	 
    float a,b,c,s,area;
    printf("Enter 3 floats:");
    scanf("%f,%f,%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area=%.2f\n",area);
}	    		   	 	 