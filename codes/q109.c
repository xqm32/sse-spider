#include <stdio.h>
int Gcd(int a, int b);
main()
{	 	 	   
    int a, b, c;
    printf("Input a,b:\n");
    scanf("%d,%d", &a, &b);//1
    c = Gcd(a, b); //2
    if (c != -1)//1
    {	 	 	   
        printf("Gcd=%d\n", c);//1
    }
    else//1
    {	 	 	   
        printf("Input error!\n");//1
    }
}	 	 	   
int Gcd(int a, int b)//1
{	 	 	   
    int r;
    if (a <= 0 || b <= 0)//2
    {	 	 	   
        return -1;//1
    }
    do
    {	 	 	   
        r = a % b;//1
        a = b;//1
        b = r;//1
    }
    while (r != 0); //e2
    return  a;	//1
}	 	 	   