#include <stdio.h>

int main()
{	   	       	 	 
    int i, j, k;
    int n;					/*定义变量n，表示行数*/

    printf("Enter n(1-9):\n");
    scanf("%d", &n);
    for (i = 0; i < 2 * n - 1; i++)
    {	   	       	 	 
        k = i;
        if (i >= n)
        {	   	       	 	 
            k = 2 * n - 2 - i;	/*当i >=n时，令k=2*n-2-i，打印相应对称图形*/
        }
        for (j = 0; j < k; j++)
        {	   	       	 	 
            printf(" ");				/*打印空格*/
        }
        for (j = 0; j < 2 * (n - k) - 1; j++)
        {	   	       	 	 
            printf("%d", n - k);			/*打印数字*/
        }
        printf("\n");
    }

}	   	       	 	 