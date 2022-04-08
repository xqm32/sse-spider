#include <stdio.h>
#include <stdlib.h>
#define N 100
int getline(char *s, int len);
int main()
{	   	  	    	
    char line[N], b[20], *ptr1, *ptrb;
    int n = 0, j, a[50];
    printf("Please enter a string:");
    getline(line, N);
    ptr1 = line;
    while (*ptr1 != '\0')
    {	   	  	    	
        ptrb = b;
        for (j = 0; *ptr1 >= '0' && *ptr1 <= '9'; ptr1++, ptrb++, j++)
        {	   	  	    	
            *ptrb = *ptr1;
        }
        if (j)
        {	   	  	    	
            *ptrb = '\0';
            *(a + n) = atoi(b);
            n++;
        }
        if (*ptr1 != '\0')ptr1++;
    }
    printf("the result of output:\n");
    for (j = 0; j < n; j++)
    {	   	  	    	
        printf("%10d\n", *(a + j));
    }
    return 0;
}	   	  	    	

int getline(char *s, int len)
{	   	  	    	
    int c;
    char *p = s;
    while (--len > 0 && (c = getchar()) != '\n')
    {	   	  	    	
        *s++ = c;
    }
    *s = '\0';
    return s - p;
}	   	  	    	

