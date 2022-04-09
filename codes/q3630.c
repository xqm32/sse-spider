#include<stdio.h>
int maxSubArray(int* nums, int numsSize) {     	     
    int lastmax = nums[0], newmax = 0, i;
    for (i = 0 ; i < numsSize ; i++) {     	     
        newmax += nums[i];
        lastmax = newmax > lastmax ? newmax : lastmax;
        newmax = newmax > 0 ? newmax : 0;
    }
    return lastmax;
}     	     

int main(int argc, char **argv)
{     	     



    int * array;
    printf("Please input the arraysize\n");
    int n,i;
    scanf("%d",&n);
    array = (int*)malloc(sizeof(int)*n);
    for(i=0; i < n; i++)
    {     	     
        printf("Please input the %d-th number\n",i);
        scanf("%d",&array[i]);
    }

    int result;
    result = maxSubArray(array,  n);
    printf("values are %d\n", result);
   //  int j;
   //  for (  i = 0; i < result; ++i)
   //  {     	     
   //       for (  j = 0; j < n; ++j)
   //       {     	     
   //            printf("%d ",pers[i][j]);
   //       }
   //       printf("\n");
   //  }


return 0;
}     	     