#include <stdio.h>
int fun(void);
main()
{	 	     		  	
    int sum;
    sum = fun();//1
    printf("sum=%4d\n", sum);
}	 	     		  	

int fun(void)
{	 	     		  	
    int i, j, k, sum = 0;  //1
    printf("The result:\n");
    for (i = 1; i <= 3; i++)//3
    {	 	     		  	
        for (j = 1; j <= 5; j++)//3
        {	 	     		  	
            for (k = 0; k <= 6; k++)//3
            {	 	     		  	
                if (i + j + k == 8)//1
                {	 	     		  	
                    printf("red: %4d white:%4d black:%4d\n", i, j, k);//1
                    sum = sum + 1;//1
                }
            }
        }
    }
    return sum;//1

}	 	     		  	