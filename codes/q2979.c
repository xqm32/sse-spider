#include<stdio.h>
int main()
{	    	 	      
    int x, m, i = 0;

    printf("Please enter the number:\n");
    scanf("%d", &x);
    m = x;               //1

    for (i = 1;; i++)    //2
    {	    	 	      
        if (x / 10 == 0) //2
        {	    	 	      
            printf("%d: %d bits\n", m, i);//1
            break;                        //1
        }
        else                              //1
        {	    	 	      
            x = x / 10;                   //2
        }
    }
    return 0;
}	    	 	      