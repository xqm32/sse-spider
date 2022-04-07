#include <stdio.h>
int Lcm(int a, int b);
int main()
{		    	
    int a, b, x;
    printf("Input a,b:");
    scanf("%d,%d", &a, &b);//1
    x = Lcm(a, b);//1
    if (x != -1)//1
    {		    	
        printf("Least Common Multiple of %d and %d is %d\n", a, b, x);//1
    }
    else
    {		    	
        printf("Input error!\n");//1
    }
    return 0;
}		    	

int Lcm(int a, int b)
{		    	
    int i;
    if (a <= 0 || b <= 0)//1
    {		    	
        return -1;
    }
    for (i = 1; i < b; i++)//3
    {		    	
        if (i * a % b == 0)//3
            return i * a;//1
    }
    return b * a;//1
}		    	