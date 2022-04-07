#include<stdio.h>
int main(void)
{	      	 	 	 
    int space = 0, newline = 0, others = 0;
    char a;
    printf("Please input a string end by #:\n");
    while ((a = getchar()) != '#')
    {	      	 	 	 
        if (a == ' ') space++;
        else if (a == '\n') newline++;
        else others++;
    }
    printf("space: %d,newline: %d,others: %d\n", space, newline, others);
    return(0);
}	      	 	 	 