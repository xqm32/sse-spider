#include <stdio.h>

int begin_with(int n)
{	 	     
    int t;

    while (n)
    {	 	     
        t = n / 10;
        if (!t)
        {	 	     
            return n;
        }
        else
        {	 	     
            n = n / 10;
        }
    }
    return 0;
}	 	     

int main()
{	 	     
    int n;

    printf("请输入一个整数：");
    scanf("%d", &n);

    printf("该整数以%d打头！\n", begin_with(n));

    return 0;
}	 	     