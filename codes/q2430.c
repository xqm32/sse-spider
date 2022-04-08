#include <stdio.h>

int main()
{	 	    	
    int unsorted[10], sorted[10];
    int i, j, min, pmin;

    printf("请输入十个整数：\n");
    for (i = 0; i < 10; i++)
    {	 	    	
        printf("第%d个数：", i + 1);
        scanf("%d", &unsorted[i]);
    }

    for (i = 0; i < 10; i++)
    {	 	    	
        min = unsorted[0];
        pmin = 0;
        for (j = 0; j < 10; j++)
        {	 	    	
            if (unsorted[j] < min)
            {	 	    	
                min = unsorted[j];
                pmin = j;
            }
        }
        unsorted[pmin] = 9999;
        sorted[i] = min;
    }

    printf("完成后sorted数组的值为：");
    for (i = 0; i < 10; i++)
    {	 	    	
        printf("%d ", sorted[i]);
    }

    return 0;
}	 	    	