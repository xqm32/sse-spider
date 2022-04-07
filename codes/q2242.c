#include<stdio.h>
int main()
{	 	 		  		  
    int i, a, n, s, m;
    printf("四位玫瑰花数有:");
    for (a = 1000; a <= 9999; a++)
    {	 	 		  		  
        s = 0;
        n = a;
        for (i = 1; i <= 4; i++)
        {	 	 		  		  
            m = n % 10;
            n = n / 10;
            s = s + m * m * m * m;
        }
        if (a == s)
        {	 	 		  		  
            printf("%d\t", a);
        }
    }
    return 0;
}	 	 		  		  