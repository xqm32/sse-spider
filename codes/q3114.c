#include <stdio.h>
main()
{	    		 	   
    int n, i, x, flag = 1;
    for (n = 6; flag; n++)   //1
    {	    		 	   
        for (x = n, i = 1; flag && i <= 5; i++)  //1
            if ((x - 1) % 5 == 0)          //2
                x = 4 * (x - 1) / 5;        //2
            else
                flag = 0;
        if (flag)
            break;
        else
            flag = 1;
    }

    printf("Total number of fish catched=%d\n", n); //1

}	    		 	   