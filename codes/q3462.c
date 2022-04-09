#include <stdio.h>
#define N 1000
#define FLAG -1
void main( )
{   	 
    int r[N], length, i, j;
    scanf("%d", &length); //1
    for (i = 0; i < length; i++)
        scanf("%d", &r[i]); //1
    for (i = length-1; i >=0 ; i--)
    {   	 
        if (r[i] != FLAG) //1
        {   	 
            for (j = i - 1; j >=0; j--) //1
                if (r[j] == r[i]) r[j] = FLAG; //1
        }
    }
    for (i = 0; r[i] != FLAG; i++); //1
    for (j = i + 1; j < length;)
    {   	 
        if (r[j] != FLAG)  //1
           r[i++] = r[j++]; //1
        else j++; //1
    }
    length = i;
    for (i = 0; i < length; i++)
        printf("%d ", r[i]); //1
}   	 