#include <stdio.h>
int Gcd(int a, int b);
int main()
{	  		 	    
    int a, b, c;
    printf("Input a,b:");//1
    scanf("%d,%d", &a, &b);//2
    c = Gcd(a, b); //2
    if (c != -1)
    {	  		 	    
        printf("Greatest Common Divisor of %d and %d is %d\n", a, b, c);//1
    }
    else
    {	  		 	    
        printf("Input number should be positive!\n");//1
    }
    return 0;
}	  		 	    

int Gcd(int a, int b) //2
{	  		 	    
    int i, t;
    if (a <= 0 || b <= 0) //2
    {	  		 	    
        return -1;
    }
    t = a < b ? a : b; //1
    for (i = t; i > 0; i--) //2
    {	  		 	    
        if (a % i == 0 && b % i == 0)  return i; //2
    }
    return 1;
}	  		 	    