#include <string.h>
#include <stdio.h>

hui(char *a)
{	   	  	  
    int i, k, j = 0;

    for (i = 0; i < 15; i++)
        if (a[i] != '\0')
            j++;
        else
            break;
    if (j % 2 == 0)
        return 0;
    for (i = 0, k = j - 1; i <= (j - 1) / 2; i++, k--)
        if (a[i] != a[k])
            return 0;
    return 1;
}	   	  	  

main()
{	   	  	  
    int x;
    char a[15];

    gets(a);
    puts(a);
    x = hui(a);
    if (x == 1)
        printf("this is huiwen!!!");
    else
        printf("this is not huiwen!!!");
}	   	  	  