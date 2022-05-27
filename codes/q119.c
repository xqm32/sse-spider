#include <stdio.h>
main()
{  	     
	int  x = 1;	//1
	int find = 0;              

	while (!find)	//1
	{  	     
		if (x % 5 == 1 && x % 6 == 5 && x % 7 == 4 && x % 11 == 10)	//2
		{  	     
			printf("x = %d\n", x);
			find = 1;	//1
		}
		x++;	//1
	}	
}  	     