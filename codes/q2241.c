#include <stdio.h>
#include <math.h>
int main()
{	 	 		  		 	 
    int i, m;
    double s, n;
    printf("Input n:");
    scanf("%lf", &n);
    for (m=1;; m++)
    {	 	 		  		 	 
         s = 0;
         for (i=m; i<=2*m; i++)
         {	 	 		  		 	 
             s = s + sqrt(i);
         }
         if (s > n)   break;
    }
    printf("m>=%d\n", m);
    return 0;
}	 	 		  		 	 
