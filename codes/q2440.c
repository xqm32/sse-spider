#include <stdio.h>

int mid(int a, int b, int c)
{	 	  	
    if (a > b)
    {	 	  	
        if (b > c)
        {	 	  	
            return b;
        }
        else if (a > c)
        {	 	  	
            return c;
        }
        else
        {	 	  	
            return a;
        }
    }
    else if (a > c)
    {	 	  	
        return a;
    }
    else if (b > c)
    {	 	  	
        return c;
    }
    else
    {	 	  	
        return b;
    }
}	 	  	

int main()
{	 	  	
    int n1, n2, n3;

    printf("请输入三个不同的整数：");
    scanf("%d%d%d", &n1, &n2, &n3);

    printf("中间的一个数为%d\n", mid(n1, n2, n3));
}	 	  	