#include <stdio.h>
int fun1(int m);
void fun2(int m, int flag);
int main()
{	   	  	 	 	   
    int m, flag;
    for (m = 2; m <= 1000; m++)
    {	   	  	 	 	   
        flag = fun1(m);
        fun2(m, flag);
    }
    return 0;
}	   	  	 	 	   
int fun1(int m)
{	   	  	 	 	   
    int i, sum, flag;
    for (i = 1, sum = 0; i < m; i++)
    {	   	  	 	 	   
        if (m % i == 0)
        {	   	  	 	 	   
            sum = sum + i;
        }
    }
    if (sum == m)
    {	   	  	 	 	   
        flag = 1;
    }
    else
    {	   	  	 	 	   
        flag = 0;
    }
    return flag;
}	   	  	 	 	   
void fun2(int m, int flag)
{	   	  	 	 	   
    int i, sum;
    if (flag == 1)
    {	   	  	 	 	   
        printf("\n%5d\n", m);
        for (i = 1; i < m; i++)
        {	   	  	 	 	   
            if (m % i == 0)
            {	   	  	 	 	   
                printf("%5d", i);
            }
        }
    }
}	   	  	 	 	   

