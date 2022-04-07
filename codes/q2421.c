#include <stdio.h>

int main()
{	 	     	   
    int num;

    printf("Input a single numeral:");
    scanf("%d", &num);//1

    switch (num)
    {	 	     	   
    case 0:
        printf("Sunday\n");
        break;//1
    case 1:
        printf("Monday\n");
        break;//1
    case 2:
        printf("Tuesday\n");
        break;//1
    case 3:
        printf("Wednesday\n");
        break;  //1
    case 4:
        printf("Thursday\n");
        break;//1
    case 5:
        printf("Friday\n");
        break; //1
    case 6:
        printf("Saturday\n");
        break;//1
    default://1
        printf("%d\n", num);
    }

    return 0;
}	 	     	   