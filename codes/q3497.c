#include <stdio.h>
#define N 100
int main()
{   	  		   
  char s[N];
  int n = 0;
  
  int x;
  printf("Please input a string:");
  while ((x = getchar()) != '\n')
    s[n++] = x;

  int first = 0;
  int last = n - 1;

  while (first < last) {   	  		   
    if (s[first] != s[last]) {   	  		   
      printf("It is not a palindrome.\n");
      return 0;
    }
    first ++;
    last --;
  }
  printf("It is a palindrome.\n");
  return 0;
}   	  		   
