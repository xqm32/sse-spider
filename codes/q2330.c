
#include "stdio.h"
#include "string.h"
int main()
{	 	     		     
    char arr[20];
    int i, j, k;

    printf("Input Sentence:");
    gets(arr);
    i = strlen(arr) - 1;
    k = i;
    printf("Output Reverse Sentence:");
    while (i >= 0)
    {	 	     		     
        while (arr[i] != ' ' && i >= 0)
        {	 	     		     
            i--;
        }
        for (j = i + 1; j <= k; j++)
        {	 	     		     
            printf("%c", arr[j]);
        }
        while (arr[i] == ' ' && i >= 0)
        {	 	     		     
            printf(" ");
            i--;
        }
        k = i;
    }
    return 0;
}	 	     		     