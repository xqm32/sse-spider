#include <stdio.h>
int IsPrime(unsigned int x);
int main()
{  	   
  int sum = 0,is_prime,n;
  int i = 0,j = 0;
  printf("Please input n(n>1):");
  scanf("%d",&n);
  for(i =2; i<=n; i++) //1
  {  	   

      if(IsPrime(i))
      {  	   
          sum+=i;
          printf("%d\n",i);
      }
  }
  printf("sum of prime numbers:%d\n",sum);
  return 0;
}  	   
int IsPrime(unsigned int x)   //1
{  	   
    int is_prime;
    int j;
    is_prime  = 1;  //1
    for(j = 2; j<x; j++)  //1
    {  	   
        if(x%j == 0)   //1
        {  	   
            is_prime = 0;  //1
            break;    //1
        }
    }
    return is_prime;
}  	   
