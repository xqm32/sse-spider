﻿#include <stdio.h>
void  Print(char *arr[], int len);
int main(void)
{	       	 	     
    char  *pArray[] = {"Fred", "Barrey", "Wilma", "Betty"};
    int    num = sizeof(pArray) / sizeof(char*);
    printf("Total string numbers = %d\n", num);
    Print(pArray, num);
    return 0;
}	       	 	     
void  Print(char *arr[], int len)
{	       	 	     
    int  i;
    for (i = 0; i < len; i++)
    {	       	 	     
        printf("%s,", arr[i]);
    }
    printf("\n");
}	       	 	     