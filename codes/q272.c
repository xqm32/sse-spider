#include <stdio.h>
int main()
{    	 	  
    int    upper, step;
    float  f = 0, c;  //1

    upper = 300;   //1
    step = 20;     //1

    while (f <= upper)   //2
    {    	 	  
        c = 5.0 / 9 * (f - 32) ; //1
        printf("%4.0f%10.1f\n", f, c);//1
        f = f + step;              //1
    }

    return 0;
}    	 	  