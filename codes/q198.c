#include <stdio.h>
#include <math.h>
int IsPerfect(int x);
main()
{  	   	   
    int m;
    printf("Input m:\n");
    scanf("%d", &m);//1
    if (IsPerfect(m))//2
    {  	   	   
        printf("%d is a perfect number\n", m);//1
    }
    else
    {  	   	   
        printf("%d is not a perfect number\n", m);//1
    }
}  	   	   
int IsPerfect(int x)//1
{  	   	   
    int i;
    int total = 0;//1
    for (i=1; i<x; i++)//2
    {  	   	   
        if (x%i == 0)//1
        {  	   	   
            total = total + i;//1
        }
    }
    if (total == x)//1
    {  	   	   
        return 1;//1
    }
    else
    {  	   	   
        return 0;//1
    }
}  	   	   