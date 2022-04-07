#include <stdio.h>

main()
{	   	    
    int i = 0;
    char str[6] = {'C', 'h', 'i', 'n', 'a', '\0'}, str1[6] , *ptr, *ptr1, *ptr2 , str2[6];
    while (str[i] != '\0')
    {	   	    
        putchar(str[i]);
        i++;
    }
    ptr = str1;
    scanf("%s", ptr);
    puts(ptr);
    ptr1 = str;
    puts(ptr1);
    ptr2 = "China";
    puts(ptr2);
    strcpy(str2, "China");
    printf("%s", str2);
}	   	    

