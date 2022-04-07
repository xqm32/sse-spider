#include <stdio.h>
int main()
{	    	    	 
    int i;
    for (i = 100; i <= 1000; i++)//2
    {	    	    	 
        if ((i - 2) % 4 == 0)//1

        {	    	    	 
            if ((i - 3) % 7 == 0)//1
            {	    	    	 
                if ((i - 5) % 9 == 0)//1
                    printf("%d\n", i);//1
                break;//1
            }
        }
    }
    return 0;

}	    	    	 