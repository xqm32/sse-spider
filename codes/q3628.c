#include<stdio.h>
int** permute(int* nums, int numsSize, int* returnSize) {     	   	 
    int ** res = malloc(10000 * sizeof(int*));
    (* returnSize) = 0;
    int stack[numsSize];
    int instack[numsSize];
    memset(instack, 0, numsSize * sizeof(int));
    int top = 0, prePop = 0, i, k;

    for (k = 0 ; k < numsSize ; k++) {     	   	 
        stack[top++] = k;
        instack[k] = 1;
        int nextSubTree = 1;
        while (top > 0) {     	   	 
            if (nextSubTree) {     	   	 
                nextSubTree = 0;
                for (i = 0 ; i < numsSize ; i++) {     	   	 
                    if (!instack[i]) {     	   	 
                        stack[top++] = i;
                        instack[i] = 1;
                    }
                }
                res[(* returnSize)] = malloc(sizeof(int) * numsSize);
                for (i = 0 ; i < top ; i++) {     	   	 
                    res[(* returnSize)][i] = nums[stack[i]];
                }
                (* returnSize)++;
            }


            if (top < numsSize) {     	   	 
                for (i = prePop + 1 ; i < numsSize ; i++) {     	   	 
                    if (!instack[i]) {     	   	 
                        stack[top++] = i;
                        instack[i] = 1;
                        nextSubTree = 1;
                        break;
                    }
                }
                if (nextSubTree) {     	   	 
                    continue;
                }
            }
            prePop = stack[--top];
            instack[prePop] = 0;
        }
    }
    return res;
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
   int** pers = permute(array,  n, &result);
    printf("values are %d\n", result);
    int j;
    for (  i = 0; i < result; ++i)
    {     	   	 
         for (  j = 0; j < n; ++j)
         {     	   	 
              printf("%d ",pers[i][j]);
         }
         printf("\n");
    }


return 0;
}     	   	 