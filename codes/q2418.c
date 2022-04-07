#include <stdio.h>

int main()
{	 	 		   
    float f1, f2, f3, sum, average;

    printf("请输入三个单精度数：");
    scanf("%f%f%f", &f1, &f2, &f3);    //2

    sum = f1 + f2 + f3;   //2
    average = sum / 3;   //2

    printf("三个数的和为%.3f，均值为%.3f", sum, average);   //1

    return 0;
}	 	 		   