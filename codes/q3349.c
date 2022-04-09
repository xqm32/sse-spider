#include <stdio.h>
int main()
{ 	 	 	 	 	   
    int n;
    int i;
    int p = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i ++)
        p = p * i;
    printf("%d\n",p);
    return 0;
} 	 	 	 	 	   
