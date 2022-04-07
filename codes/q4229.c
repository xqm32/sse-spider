#include "stdio.h"
#include "conio.h"
main()
{		 	   		 
    char i, j, k; /*i是a的队友，j是b的队友，k是c的队友*/
    for (i = 'x'; i <= 'z'; i++) //2
        for (j = 'x'; j <= 'z'; j++) //2
        {		 	   		 
            if (i != j) //2
                for (k = 'x'; k <= 'z'; k++) //2
                {		 	   		 
                    if (i != k && j != k) //2
                    {		 	   		 
                        if (i != 'x' && k != 'x' && k != 'z') //2
                            printf("The group is a--%c\tb--%c\tc--%c\n", i, j, k); //2
                    }
                }
        }
    getch();
}		 	   		 