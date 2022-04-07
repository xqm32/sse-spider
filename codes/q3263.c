#include <stdio.h>
int main()
{  	 
  int sum = 0,is_prime;
  int i = 0,j = 0;
  for(i =2; i<=100; i++) //1
  {  	 
      is_prime  = 1;  //1
      for(j = 2; j<i; j++)  //1
      {  	 
          if(i%j == 0)   //1
          {  	 
              is_prime = 0;  //1
              break;    //1
          }
      }
      if(is_prime)
      {  	 
          sum+=i;    //1
          printf("%d\n",i);  
      }
  }
  printf("sum of prime numbers:%d\n",sum);
  return 0;
}  	 