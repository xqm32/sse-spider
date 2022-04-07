#include <stdio.h>
#include <stdlib.h>

int main()
{		    
    printf("Input the number of students:\n");
    int number;
    scanf("%d", &number);

    printf("Input the grades of the students:\n");
    int grades[101]={0};

    int i;
    for(i=0; i<number; ++i)
    {		    
        int gra;
        scanf("%d", &gra);
        grades[gra]++;
    }
    printf("The sorted grades:\n");

    i=0;
    while(i<=100)
    {		    
        while(grades[i]-->0)
            printf("%d ", i);
        ++i;
    }
    printf("\n");
    return 0;
}		    


