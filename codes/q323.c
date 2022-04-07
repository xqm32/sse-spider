#include <stdio.h>
main()
{	    		   	   
    int a, b, c, sum, rem;
    float ave;
    printf("Enter three integer: ");
    scanf("%d%d%d", &a, &b, &c);
    sum = a + b + c;
    ave = sum / 3.0;
    rem = sum % 3;
    printf("SUM = %4d\nAVERAGE = %.2f  REMAINDER = %3d\n", sum, ave, rem);
}	    		   	   