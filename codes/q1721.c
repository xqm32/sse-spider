#include  <stdio.h>
#include  <math.h>
int main()
{	         	   
    float data1, data2;         		//定义两个操作符
    char op;                      		//定义运算符
    char reply;                  		//用户输入的回答
    do
    {	         	   
        printf("Please enter the expression:\n");
        scanf("%f %c%f", &data1, &op, &data2);  	//%c前有一空格
        switch (op)                  	//根据输入的运算符确定要执行的运算
        {	         	   
        case '+'://1
            printf("%f + %f = %f\n", data1, data2, data1 + data2);
            break;//1
        case '-'://1
            printf("%f - %f = %f\n", data1, data2, data1 - data2);
            break;
        case '*'://1
            printf("%f * %f = %f\n", data1, data2, data1 * data2);
            break;
        case '/'://1
            if (fabs(data2) <= 1e-7)//1
            {	         	   
                printf("Division by zero!\n");
            }
            else
            {	         	   
                printf("%f / %f = %f\n", data1, data2, data1 / data2);
            }
            break;
        default://1
            printf("Unknown operator!\n");
        }
        printf("Do you want to continue(Y/N or y/n)?");
        scanf(" %c", &reply);				//%c前有一空格
    }
    while (reply == 'Y' || reply == 'y');//1
    return 0;
}	         	   