#include <stdio.h>
void Input(int a[], int n);
int Findmax(int a[], int n, int *pos);
int main()
{	  	 	 	   	   
    int  n, a[30];
    int maxNum;
    int maxPos;

    printf("Input n:");
    scanf("%d", &n);

    Input(a, n);
    maxNum = Findmax(a, n, &maxPos); //2

    printf("The maximum subscript is:%d,The maximum value is:%d\n", maxPos, maxNum);

    return 0;
}	  	 	 	   	   
void Input(int a[], int n)
{	  	 	 	   	   
    int i;
    for (i = 0; i < n; i++) 
    {	  	 	 	   	   
        scanf("%d", &a[i]); 
    }
}	  	 	 	   	   
int Findmax(int a[], int n, int *pos)
{	  	 	 	   	   

    int i, maxNum;

    *pos = 0;
    maxNum = a[0];

    for (i = 1; i < n; i++)  //1
    {	  	 	 	   	   
        if (a[i] > maxNum)   //2
        {	  	 	 	   	   
            maxNum = a[i];   //2
            *pos = i;        //2

        }
    }
    return maxNum;           //1

}	  	 	 	   	   