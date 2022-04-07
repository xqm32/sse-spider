#include <stdio.h>

int main()
{	    	  
    int score;
    int grade;
    printf("Please enter score:");
    scanf("%d", &score);
    if (score > 100 || score < 0)
    {	    	  
        printf("Input error!\n");
    }
    else
    {	    	  
        grade = score / 10;
        switch(grade)
        {	    	  
            case 10:
            case 9: printf("%d--A\n", score); break;
            case 8: printf("%d--B\n", score); break;
            case 7: printf("%d--C\n", score); break;
            case 6: printf("%d--D\n", score); break;
            default: printf("%d--E\n", score); break;
        }
    }
    return 0;
}	    	  