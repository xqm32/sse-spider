#include <stdio.h>
void main()
{ 		 		     
    int m, n;
    printf("Enter m, n:");
    scanf("%d,%d", &m, &n);
    int i = 0, s = 0;
    for (i = m; i <= n; i++)
        if ( i%3 != 0)
            s = s + i;
    printf("The number is %d\n", s);

} 		 		     
