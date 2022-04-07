#include <stdio.h>
int main()
{		   	   
    int  year, month;
    printf("Input year,month:");
    scanf("%d,%d", &year, &month);//2
    switch (month)//3
    {		   	   
    case 1://1
    case 3://1
    case 5://1
    case 7://1
    case 8://1
    case 10://1
    case 12://1
        printf("31 days\n");//1
        break;//1
    case 2://1
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))//2
        {		   	   
            printf("29 days\n");//1
        }
        else
        {		   	   
            printf("28 days\n");//1
        }
        break;//1
    case 4://1
    case 6://1
    case 9://1
    case 11://1
        printf("30 days\n");//1
        break;//1
    default:
        printf("Input error!\n");//1
    }
    return 0;
}		   	   

