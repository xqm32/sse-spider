#include <stdio.h>
int Gcd(int a, int b);//1
int main()
{	       	   	   
    int a, b, c;
    printf("Input a,b:");
    scanf("%d,%d", &a, &b);//1
    c = Gcd(a, b);//2
    if (c != -1)//1
        printf("Greatest Common Divisor of %d and %d is %d\n", a, b, c);//1
    else
        printf("Input number should be positive!\n");//1
    return 0;
}	       	   	   
int Gcd(int a, int b)
{	       	   	   
    if (a <= 0 || b <= 0)		//1
        return -1;//1
    if (a == b)//1
        return a;//1
    else if (a > b)//1
        return Gcd(a - b, b);//1
    else
        return Gcd(a, b - a);//1
}	       	   	   