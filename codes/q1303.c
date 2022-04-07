#include <stdio.h>

int main()
{	       	 
    long i;
    int branch;
    float temp, bonus, bon1, bon2, bon4, bon6, bon10;

    /* 初始化变量 */
    bon1 = 100000 * 0.1;//1
    bon2 = bon1 + 100000 * 0.075;//1
    bon4 = bon2 + 200000 * 0.05;//1
    bon6 = bon4 + 200000 * 0.03;//1
    bon10 = bon6 + 400000 * 0.015;//1
    printf("请输入利润：");
    scanf("%ld", &i);//1
    temp = i / 100000;//1
    if (i <= 100000)//1
        branch = 0;//1
    else
        branch = temp;
    if (branch > 10)//1
    {	       	 
        branch = 10;
    }
    /* 计算 */
    switch (branch)//1
    {	       	 
    case 0:
        bonus = i * 0.1;//1
        break;
    case 1:
        bonus = bon1 + (i - 100000) * 0.075;//1
        break;
    case 2:
    case 3:
        bonus = bon2 + (i - 200000) * 0.05;//1
        break;
    case 4:
    case 5:
        bonus = bon4 + (i - 400000) * 0.03;//1
        break;
    case 6:
    case 7:
    case 8:
    case 9:
        bonus = bon6 + (i - 600000) * 0.015;//1
        break;//1
    case 10:
        bonus = bon10 + (i - 1000000) * 0.01;//1
    }
    printf("奖金是%10.2f", bonus);

    return 0;
}	       	 