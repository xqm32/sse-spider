#include <stdio.h>
int main()
{	       	  
    int year;

    printf("Input year:\n");
    scanf("%d", &year);                 //1

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) //3
    {	       	  
        printf("Yes");                //1
    }
    else                              //1
    {	       	  
        printf("No");                 //1
    }

    return 0;
}	       	  