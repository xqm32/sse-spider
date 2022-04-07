#include<stdio.h>
int main()
{	 	       	 	 
    int i, pingf, youd;

    printf("Print all the isomorphism between 1-999:\n");

    for (i = 1; i < 1000; i++)   //1
    {	 	       	 	 
        pingf = i * i;         //1

        if (i < 10)            //1
        {	 	       	 	 
            youd = pingf % 10;  //1
        }
        if (i > 10)             //1
        {	 	       	 	 
            if (pingf <= 10000)     //1
                youd = pingf % 100;
            else                     //1
                youd = pingf % 1000;
        }
        if (youd == i)           //1
        {	 	       	 	 
            printf("%d ", i);
        }
    }

    return 0;
}	 	       	 	 