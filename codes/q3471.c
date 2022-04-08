#include <stdio.h>
#define N 10
int main()
{  	       
  int a[N];
  printf("Please input ten integers:\n");
  int i;
  for (i = 0; i < N; i ++)
    scanf("%d", &a[i]);

  int min, max;

  min = a[0];
  max = a[0];
  for (i = 1; i < N; i ++) {  	       
    if (a[i] < min) {  	       
      min = a[i];
    }
    if (a[i] > max) {  	       
      max = a[i];
    }
  }

  printf("The sum of the minimum value and the maximum value is %d\n", min + max);
  return 0;
}  	       
