#include <stdio.h>
int main()
{	    	   	  
    int score, n;
    char grade;
    printf("Please input score:\n");
    n = scanf("%d", &score);
    if (n != 1)
    {	    	   	  
        printf("Input error!\n");
    }
    else
    {	    	   	  
        if  (score < 0 || score > 100)
        {	    	   	  
            printf("Input error!\n");

        }
        else if (score >= 90)

        {	    	   	  
            grade = 'A';
            printf("grade: %c\n", grade);

        }
        else if (score >= 80)
        {	    	   	  
            grade = 'B';
            printf("grade: %c\n", grade);

        }
        else if (score >= 70)
        {	    	   	  
            grade = 'C';
            printf("grade: %c\n", grade);

        }
        else if (score >= 60)
        {	    	   	  
            grade = 'D';
            printf("grade: %c\n", grade);

        }

        else
        {	    	   	  
            grade = 'E';
            printf("grade: %c\n", grade);

        }

    }

    return 0;
}	    	   	  