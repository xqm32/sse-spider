#include <stdio.h>
#include <stdlib.h>

int main()
{	   	      	
    int month, day, year;

    printf("Enter date (mm/dd/yy):");
    scanf("%d/%d/%d", &month, &day, &year);
    if (day<1||day>31 || month<1||month>12)
    {	   	      	
        printf("Input error!\n");
        exit(0);
    }
    if(month==2)
    {	   	      	
        if((year%4==0&&year%400!=0)|year%100==0)
    	{	   	      	
	    	if(day>29)
			{  
				printf("Input error!\n");
				exit(0);
			}
    	}
	   
		else
			if(day>28)
			{  
				printf("Input error!\n");
				exit(0);
			}
        
    }
    if(month==4|month==6|month==9|month==11)
    {	   	      	
        	if(day>30)
			{   printf("Input error!\n");
             exit(0);
			}
    }
    printf("Dated this %d", day);
    switch (day)
    {	   	      	
    case 1:
    //case 11:
    case 21:
    case 31:
        printf("st");
        break;
    case 2:
    //case 12:
    case 22:
        printf("nd");
        break;
    case 3:
    //case 13:
    case 23:
        printf("rd");
        break;
    default:
        printf("th");
        break;
    }

    printf(" day of ");

    switch (month)
    {	   	      	
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    }

    printf(", 19%.2d.\n", year);

    return 0;
}	   	      	