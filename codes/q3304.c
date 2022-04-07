#include <stdio.h>
unsigned int InputNumber(char ch);
int IsPrime(unsigned int n);
int PrimeSum(unsigned int m, unsigned int n);
int main()
{  			 
    int m = 0,n = 0,sum = 0,i = 0;
    do
    {  			 
        m = InputNumber('m');
        n = InputNumber('n');
    }while(m > n && printf("n must be not smaller than m! Input again!\n"));
    sum = PrimeSum(m,n);
    printf("sum of prime numbers:%d",sum);
    return 0;
}  			 
int PrimeSum(unsigned int m, unsigned int n)
{  			 
    int sum = 0,i;
    for(i = m; i<= n; i++)
    {  			 
        if(IsPrime(i))
        {  			 
            printf("%d\n",i);
            sum+= i;
        }
    }
    return sum;
}  			 
unsigned int InputNumber(char ch)
{  			 
    int n, in;
    do
    {  			 
        printf("Please input the number %c(>1):",ch);
        in = scanf("%d",&n);
        while(getchar()!='\n');
    }while((in!=1 || n < 2) && printf("The input must be an integer larger than 1!\n") );
    return n;
}  			 
int IsPrime(unsigned int n)
{  			 
    int isPrime = 1,i;
    for(i = 2; i < n; i++)
    {  			 
        if(n%i==0)
        {  			 
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}  			 
