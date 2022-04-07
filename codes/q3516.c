#include<stdio.h>
#include<string.h>
#define MAX 8
#define CMAX 20
int main()
{   	 	    
    char a[MAX][CMAX], term[CMAX];                                   //1
    int i, j;
    for (i = 0; i < 8; i++)
    {   	 	    
        scanf("%s", a[i]);                                            //1
    }

    for (i = 0; i < 8 - 1; i++)                                //1
    {   	 	    
        for (j = 1; j < 8 - i; j++)                            //1
        {   	 	    
            if (strcmp(a[j], a[j - 1]) < 0)                     //1
            {   	 	    
                strcpy(term, a[j]);                             //1
                strcpy(a[j], a[j - 1]);                         //1
                strcpy(a[j - 1], term);                         //1
            }
        }
    }
    for (i = 0; i < 8; i++)
    {   	 	    
        printf("%s\n", a[i]);
    }
    return 0;
}   	 	    