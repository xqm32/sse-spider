#include<stdio.h>
main()
{	   	  
    int a, b, c, count = 0;
    for (a = 1; a <= 9; a++)	//2
    {	   	  
        for (b = 0; b <= 9; b++)	//2
        {	   	  
            for (c = 0; c <= 9; c++)	//2
            {	   	  
                if (a != b && a != c && b != c && c % 2 == 0)	//2
                {	   	  
                    count++;  //1
                }
            }
        }
    }
    printf("%d\n", count);   //1

}	   	  