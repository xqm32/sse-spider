#include <stdio.h>
#include <string.h>

int main()
{	  	     	 
    char str[100];
    int i, j;

    printf("Input a string:\n");
    gets(str);

    i = 0;
    j = strlen(str) - 1;
    while ((i < j) && (str[i] == str[j]))
    {	  	     	 
        i++;
        j--;
    }
    if (i < j)
    {	  	     	 
        printf("This string is not a plalindrome.\n");
    }
    else
    {	  	     	 
        printf("This string is a plalindrome.\n");
    }

    return 0;
}	  	     	 