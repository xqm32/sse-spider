﻿#include <stdio.h>
#define SIZE 10
void main( )
{ 
   int  i, j, t, a[SIZE];
   printf("input  10  numbers: \n");
   for (i = 0; i < SIZE; i++)
         scanf("%d", &a[i]);
   printf("\n");
   for (i = 0; i< SIZE-1; i++)
       for (j = SIZE - 1; j >= i + 1; j--)
           if (a[j] < a[j-1])
            {	   		   	 
                t=a[j];
                a[j]=a[j-1];
                a[j-1]=t;
            }
   for (i = 0; i < SIZE; i++)
      printf("%d\n", a[i]);
}	   		   	 