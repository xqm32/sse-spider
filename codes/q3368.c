#include<stdio.h>

void fun(int x, int pp[], int *n)
{ 	 	 	    
    int i, j = 0;
    for (i = 2; i <= x; i = i + 2) //1
    { 	 	 	    
        if (x % i == 0) //1
        { 	 	 	    
            pp[j++] = i; //2
        }
    }
    *n = j; //1
} 	 	 	    

void main()
{ 	 	 	    
    int x, aa[1000], n, i;
    printf("Input number:");  //1
    scanf("%d", &x);
    fun(x, aa, &n); //1
    for (i = 0; i < n; i++) //1
        printf(" %d", aa[i]); //1
    printf("\n"); //1
} 	 	 	    