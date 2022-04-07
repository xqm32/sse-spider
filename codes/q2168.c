#include <stdio.h>
#include <math.h>

int main(void)
{	 	 	    	 
    int lower, upper, month, year, loan;
    double money, rate;
    lower = 5;
    upper = 30;
    printf("请输入贷款本金:loan\n");
    scanf("%d", &loan);
    printf("请输入月利率:rate\n");
    scanf("%lf", &rate);
    printf("还款年限\t月还款额\n");
    for (year = lower; year <= upper; year++)
    {	 	 	    	 
        month = year * 12;
        money = (loan * rate * pow((1 + rate), month)) / (pow((1 + rate), month) - 1);
        printf("%d\t\t%.0f\n", year, money);
    }

    return 0;
}	 	 	    	 