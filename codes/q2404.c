#include<stdio.h>
void Swap(int *x, int *y)
{	 	  	   
    int  temp;
    temp = *x;
    *x = *y;
    *y = temp;
}	 	  	   
void Sort(int *p, int m)
{	 	  	   
    int i;
    int change, *p1, *p2;
    for (i = 0; i < m / 2; i++)
    {	 	  	   

        p1 = p + i;
        p2 = p + (m - 1 - i);
        Swap(p1, p2);
    }
}	 	  	   

int main( )
{	 	  	   
    int i;
    int *p, num[6];
    for (i = 0; i <= 5; i++)
        scanf("%d", &num[i]);
    p = &num[0];
    Sort(p, 6);
    for (i = 0; i <= 5; i++)
        printf("%d ", num[i]);
    return 0;
}	 	  	   