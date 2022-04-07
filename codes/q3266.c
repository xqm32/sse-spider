#include <stdio.h>
int main()
{  	  	  
    float x;
    float y;
    printf("input x:\n");
    scanf("%f", &x);    //3
    if (x <= 10 && x >= -7)      //5
    {  	  	  
        y = 5 * x * x - 4 * x + 6;    //2


    }
    else      //2
    {  	  	  

        y = x / 3.0 + 32;      //3
    }
    printf("y=%.3f\n", y);    //2
    return 0;

}  	  	  