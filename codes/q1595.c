#include <stdio.h>
main()
{ 	   		  
    int x,y,z;
    printf("Man \t Women \t Childern\n");
    for (x=1; x<16; x++)  //1
        for (y=1; y<25; y++)  //1
        { 	   		  
            z = 30 - x - y;  //1
            if ((3 * x + 2 * y + z == 50) &&(z>0))  //2
                printf("%3d\t %5d\t %8d\n",x,y,z);  //1
        }
} 	   		  