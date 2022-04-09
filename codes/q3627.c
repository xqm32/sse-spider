#include<stdio.h>
int firstMissingPositive(int* nums, int numsSize) {     	  
    int i, t;
    for (i = 0 ; i < numsSize ; i++) {     	  
        int idx = nums[i] - 1;
        if (idx > -1 && idx < numsSize && nums[idx] != nums[i]) {     	  
            t = nums[idx];
            nums[idx] = nums[i];
            nums[i] = t;
            i--;
        }
    }
    for (i = 0 ; i < numsSize ; i++) {     	  
        if (nums[i] != i+1) {     	  
            break;
        }
    }
    return i+1;
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


    int result = firstMissingPositive(array, n);
    printf("values are %d\n", result);


return 0;
}     	  