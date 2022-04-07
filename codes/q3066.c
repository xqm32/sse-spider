#include  <math.h> //1
#include  <stdio.h>
int main()
{	    	    	
    int n, sum, a, b, sub, multi, mod;
    float dev;

    printf("please input n:\n");
    scanf("%d", &n);  //1

    a = n / 100;  //1

    b = n % 100;  //1

    sum = a + b;  //1

    sub = a - b;   //1

    multi = a * b;   //1

    printf("%d,%d\n", a, b);

    printf("sum=%d,sub=%d,multi=%d\n", sum, sub, multi);

    if (b != 0)  //1
    {	    	    	
        dev = (float)a / b;  //1

        mod = a % b;  //1

        printf("dev=%.2f,mod=%d\n", dev, mod);

    }
    else
    {	    	    	
        printf("the second operater is zero!\n");  //1
    }

    return 0;


}	    	    	