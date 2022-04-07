#include  <stdio.h>
int main(void)
{		     	   	   
    int birthyear, thisyear, count, i;
    printf("Input your birth year:");
    scanf("%d", &birthyear);
    printf("Input this year:");
    scanf("%d", &thisyear);
    for (i=birthyear, count=0; i<=thisyear; i++)
    {		     	   	   
        if((i%4 == 0 && i%100 != 0) || (i%400 == 0))
        {		     	   	   
            count++;
            printf("%d\n", i);
        }
    }
    printf("count=%d\n", count);
    return 0;
}		     	   	   
