#include <stdio.h>
main()
{	       	 	 
	long i;  //注意这里i必须定义为long类型
	long term, sum = 0; //1
	for (i=1; i<=99; i=i+2) //1
	{	       	 	 
		term = i * (i + 1) * (i + 2); //1
		sum = sum + term;//1
	}
	printf("sum = %ld", sum);
}	       	 	 