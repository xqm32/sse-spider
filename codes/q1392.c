#include <stdio.h>
#include <string.h>
main( )
{	     	  	 
    int  cases, sum[10], i, max;
    char str[1001];                          
    scanf("%d", &cases);                    
    while (cases > 0)
    {	     	  	 
        scanf("%s", str);
        for( i = 0; i < 10; i++)
            sum[i] = 0; 
        for(i = 0; i < strlen(str); i++)
            ++sum[str[i] - '0'];
        max = 0;   
        for (i = 1; i < 10; i++)
             if(sum[i] > sum[max]) max = i;
        printf("%c %d\n", max + '0', sum[max]);
        cases --;      
    }
}	     	  	 