#include <stdio.h>
main()
{	   	  	    
    int i, j, m;
    char s1[80], s2[80];
    printf("input a string:\n");
    gets(s1);
    printf("input start point:\n");
    scanf("%d", &m);
    i = m - 1;
    j = 0;

    while (s1[i] != '\0')
    {	   	  	    
        s2[j] = s1[i];
        i++;
        j++;
    }

    s2[j] = '\0';
    puts(s2);
}	   	  	    

