#include <stdio.h>
#include  <math.h>		//1
main()
{ 
	int i1,i2,i3,k,n;
	printf("input data is:");
	scanf("%d",&n);
	k = fabs(n);		//1
	i1 = k / 100;	//1	
	i2 = (k - i1 * 100) / 10;	//1
    i3 = k%10;	//1
	
    printf("The sum of the total bit is %d\n",i1 + i2 + i3);	//1
}	   	  	   