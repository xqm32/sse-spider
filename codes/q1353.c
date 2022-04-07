#include <stdio.h>
#include <stdlib.h>

int main()
{	    	  
    int y, m, d;
    int sum = 0;
    scanf("%4d-%2d-%2d", &y, &m, &d);
    if (y < 1990)
    {	    	  
        printf("Invalid input.");
        return 0;
    }
    if ((y % 100 != 0 && y % 4 == 0) || (y % 400 == 0))
    {	    	  
        switch (m)
        {	    	  

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (d > 31 || d < 1)
            {	    	  
                printf("Invalid input.");
                return 0;
            }
            break;
        case 2:
            if (d > 29 || d < 1)
            {	    	  
                printf("Invalid input.");
                return 0;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (d > 30 || d < 1)
            {	    	  
                printf("Invalid input.");
                return 0;
            }
            break;
        default:
            printf("Invalid input.");
            return 0;
            break;
        }
    }
    else
    {	    	  
        switch (m)
        {	    	  
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (d > 31 || d < 1)
            {	    	  
                printf("Invalid input.");
                return 0;
            }
            break;
        case 2:
            if (d > 28 || d < 1)
            {	    	  
                printf("Invalid input.");
                return 0;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (d > 30 || d < 1)
            {	    	  
                printf("Invalid input.");
                return 0;
            }
            break;
        default:
            printf("Invalid input.");
            return 0;
            break;
        }
    }
    int i;
    if (y > 1990)
    {	    	  
        for (i = 1990; i < y; i++)
        {	    	  
            if ((i % 100 != 0 && i % 4 == 0) || (i % 400 == 0))
            {	    	  
                sum = sum + 366;
            }
            else
            {	    	  
                sum = sum + 365;
            }
        }

    }


    int i1;
    if (m > 1)
    {	    	  
        for (i1 = 1; i1 < m; i1++)
        {	    	  
            if ((y % 100 != 0 && y % 4 == 0) || (y % 400 == 0))
            {	    	  
                switch (i1)
                {	    	  
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    sum = sum + 31;
                    break;
                case 2:
                    sum = sum + 29;
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    sum = sum + 30;
                    break;
                }
            }
            else
            {	    	  
                switch (i1)
                {	    	  
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    sum = sum + 31;
                    break;
                case 2:
                    sum = sum + 28;
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    sum = sum + 30;
                    break;
                }
            }
        }
    }
    sum = sum + d;
    sum = sum % 5;
    if (sum == 0 || sum == 4)
    {	    	  
        printf("He is having a rest.");
    }
    else
    {	    	  
        printf("He is working.");
    }
    return 0;
}	    	  


