#include <stdio.h>
int FindMax(int num[], int n, int *pMaxPos);
int FindMin(int num[], int n, int *pMinPos);
int main(void)
{	       	 
    int num[10], maxValue, maxPos, minValue, minPos, i;
    printf("Input 10 numbers:\n");
    for (i = 0; i < 10; i++)
    {	       	 
        scanf("%d", &num[i]);			   // 输入10个数
    }
    maxValue = FindMax(num, 10, &maxPos);  // 找最大值及其所在下标位置
    minValue = FindMin(num, 10, &minPos);  // 找最小值及其所在下标位置
    printf("Max=%d,Position=%d,Min=%d,Position=%d\n",
           maxValue, maxPos, minValue, minPos);
    return 0;
}	       	 
//函数功能：求有n个元素的整型数组num中的最大值及其所在下标位置，函数返回最大值
int FindMax(int num[], int n, int *pMaxPos)
{	       	 
    int i, max;
    max = num[0];			//假设num[0]为最大值
    *pMaxPos = 0;			//假设最大值在数组中的下标位置为0
    for (i = 1; i < n; i++)
    {	       	 
        if (num[i] > max)
        {	       	 
            max = num[i];
            *pMaxPos = i;  	//pMaxPos指向最大值数组元素的下标位置
        }
    }
    return max ;
}	       	 
//函数功能：求有n个元素的整型数组num中的最小值及其所在下标位置，函数返回最小值
int FindMin(int num[], int n, int *pMinPos)
{	       	 
    int i, min;
    min = num[0];            //假设num[0]为最小
    *pMinPos = 0;            //假设最小值在数组中的下标位置为0
    for (i = 1; i < 10; i++)
    {	       	 
        if (num[i] < min)
        {	       	 
            min = num[i];
            *pMinPos = i;  //pMinPos指向最小值数组元素的下标位置
        }
    }
    return min ;
}	       	 