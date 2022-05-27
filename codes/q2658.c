#include<stdio.h>
int main()
{	  	   		   
    int x, y, z;

    for (x = 0; x <= 9; x++) //4
    {	  	   		   
        for (y = 0; y <= 12; y++) //4
        {	  	   		   
            for (z = 0; z <= 72; z = z + 2) //4
            {	  	   		   
                if (x + y + z == 36 && 4 * x + 3 * y + z / 2 == 36)//4
                {	  	   		   
                    printf("men=%d,women=%d,children=%d\n", x, y, z);  //1      //2
                }
            }
        }

    }

    return 0;
}	  	   		   