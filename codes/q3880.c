#include <stdio.h>
int Gcd(int a, int b);
int IsPrime(int n);


int main()
{  	 	 	  	    
    int m, n, f;
    printf("Input m and n:");
    scanf("%d,%d", &m, &n);
    if ( !(IsPrime(m) && IsPrime(n)) )
    {  	 	 	  	    
        f = Gcd(m, n);//1
        if (f != -1)//1
        {  	 	 	  	    
            printf("The GCD of %d and %d is %d \n", m , n, f);
        }
        else
        {  	 	 	  	    
            printf("%d and %d no GCD",m,n);
        }
    }else
    {  	 	 	  	    
        printf("%d and %d is prime",m,n);
    }
   
    return 0;
}  	 	 	  	    
// 函数功能：计算a和b的最大公约数，输入负数时返回-1
int Gcd(int a, int b)
{  	 	 	  	    
    if (a <= 0 || b <= 0)
    {  	 	 	  	    
        return -1;
    }
    while (a != b)
    {  	 	 	  	    
        if (a > b)
        {  	 	 	  	    
            a = a - b;
        }
        else if (b > a)
        {  	 	 	  	    
            b = b - a;
        }
    }
    return a;
}  	 	 	  	    

int IsPrime(int n)
{  	 	 	  	    
    int isPrime = 1, i;
    if (n <= 1) return 0;
    for (i = 2; i < n; i++)
    {  	 	 	  	    
        if (n % i == 0)
        {  	 	 	  	    
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}  	 	 	  	    