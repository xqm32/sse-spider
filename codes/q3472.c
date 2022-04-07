#include <stdio.h>
#define N 10
int main()
{  	   
  int a[N];
  printf("Please input ten integers:\n");
  int i;
  for (i = 0; i < N; i ++)
    scanf("%d", &a[i]);

  int sum = 0;
  for (i = 0; i < N; i ++) {  	   
    sum += a[i];
  }

  printf("The mean value is %.2f\n", (double)sum/N);
  return 0;
}  	   
