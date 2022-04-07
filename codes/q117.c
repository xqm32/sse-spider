#include <stdio.h>
main()
{  	 	 	 
	int x, y, z;

	for (x = 0; x <= 20; x++)            //2
	{  	 	 	 
		for (y = 0; y <= 33; y++)     //2
		{  	 	 	 
			z =100-x-y;            //2
				if (5*x + 3*y + z/3.0 == 100)   //2
				{  	 	 	 
					printf("x=%d,y=%d,z=%d\n", x, y, z);  //2
				}
		}
	}
}  	 	 	 