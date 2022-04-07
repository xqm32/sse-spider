#include<stdio.h>
int fun(int m);
main()
{      
    int m, flag;

    for (m = 200; m <= 300; m++)  //2
    {      

        flag = fun(m);       //3
        if (flag)            //1
        {      
            printf("%d\n", m);    //1
        }
    }
}      
int fun(int m)
{      
    int i, flag = 1;             //1

    for (i = 2; i < m; i++)      //2
    {      
        if (m % i == 0)      //2
        {      
            flag = 0;    //1
            break;
        }
    }
    return flag;                 //1
}      
