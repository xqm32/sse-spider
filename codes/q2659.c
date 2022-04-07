#include<stdio.h>
long fac(int n);//2
int main()
{	  	 	 		 
    int i, n;
    long term, sum = 0;

    i = 1;                          //2
    printf("Input n:");//1
    scanf("%d", &n);//2


    while (i <= 2 * n - 1)          //2
    {	  	 	 		 
        term = fac(i);                //2
        sum = sum + term;             //2
        i += 2;                        //2
    }
    printf("sum=%ld\n", sum);//2
}	  	 	 		 
long fac(int n)//4
{	  	 	 		 
    int i;
    long p = 1;

    for (i = 1; i <= n; i++)        //3
    {	  	 	 		 
        p = p * i;                  //2
    }
    return p;                       //4
}	  	 	 		 