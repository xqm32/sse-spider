#include<stdio.h>
int* plusOne(int* digits, int digitsSize, int* returnSize) {     	 
    int * res;
    (* returnSize) = 0;
    if (digits[0] == 9 && digits[digitsSize-1] == 9) {     	 
        res = malloc((digitsSize+1)*sizeof(int));
        (* returnSize) = digitsSize + 1;
    } else {     	 
        res = malloc(digitsSize*sizeof(int));
        (* returnSize) = digitsSize;
    }
    int pos = (* returnSize) - 1;
    int carry= 1, i;
    for ( ; pos >= 0 ; pos--) {     	 
        res[pos] = (digitsSize > 0 ? digits[--digitsSize] : 0) + carry;
        if (res[pos] > 9) {     	 
            res[pos] = 0;
        } else {     	 
            carry = 0;
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
    int* plusresult = plusOne(array,  n,&result);
  
    printf("after plus one\n");
    int j;
    for (  i = 0; i < result; ++i)
    {     	 
         printf("%d",plusresult[i]);
       
    }


return 0;
}     	 