#include <string.h>
#include <stdio.h>

char sh(char *a, char x)
{	   	  		 
    int i = 0, k, j;
    char q;

    while (a[i] != '\0') i++;
    for (j = 0; j < i; j++)
    {	   	  		 
        if (a[j] == x)
        {	   	  		 
            q = a[j];
            for (k = j; k < i; k++)
                a[k] = a[k + 1];
            return q;
        }
    }
    return '\0';
}	   	  		 
main()
{	   	  		 
    char a[6] = "seven", x, ch;
    printf("The Original string is:");
    puts(a);
    printf("Enter x: ");
    scanf("%c", &x);
    ch = sh(a, x);
    if (ch == '\0')
        printf("%c not found!!!", x);
    else
    {	   	  		 
        printf("The deleted charactor is :");
        putchar(x);
    }
    printf("\nThe Original string changes to :");
    puts(a);
}	   	  		 

