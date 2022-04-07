#include <stdio.h>
int main()
{	 	      	 	 
    int n, m = 0;                       //1
    printf("input n:");
    scanf("%d", &n);                    //1
    while (n != 0)                      //2
    {	 	      	 	 
        m = m * 10 + n % 10;            //2
        n = n / 10;                     //1
    }
    printf("m=%d\n", m);                //1
    return 0;
}	 	      	 	 