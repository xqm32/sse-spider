#include <stdio.h>
int main()
{ 	 	 	 	  	
    int n;
    scanf("%d", &n);
    int p = 1;
    int i;
    for (i = 1; i <= n; i ++)
        p = p * i;
    printf("%d\n",p);
    return 0;
} 	 	 	 	  	