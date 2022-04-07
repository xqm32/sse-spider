#include <stdio.h>
main()
{ int i,j,count=0;
  printf("   RED BALL  WHITE BALL  BLACK BALL\n");
  printf("----------------------------------------\n");
  for(i=0;i<=3;i++)
    for(j=0;j<=3;j++)
      if((8-i-j)<=6)
        printf("%2d:  %d   %d    %d\n",++count,i,j,8-i-j);
}	   	   	   	
