#include <stdio.h>

#define N 24

int main()
{	 	         
    int time_entered, total_num_customers = 0;
    int num_customers[N];
    int max_customers, min_customers, max, min;

    // Enter number of customers for each hour.
    for (time_entered = 0; time_entered < N; time_entered++)
    {	 	         
        printf("请输入在%d:00和%d:00之间登录的用户数：",
               time_entered, time_entered + 1);
        scanf("%d", &num_customers[time_entered]);
        total_num_customers += num_customers[time_entered] ;
    }

    // Display report headings.
    printf("   时间                 登录人数                 所占比例\n");

    // Display report lines.
    max_customers = min_customers = num_customers[0];
    max = min = 0; //记录最大最小的下标
    for (time_entered = 0; time_entered < N; time_entered++)
    {	 	         
        printf("%2d:00 - %2d:00 %15d %25.1f\n", time_entered, time_entered + 1,
               num_customers[time_entered], (num_customers[time_entered] * 100.0) / total_num_customers);
        if (num_customers[time_entered] > max_customers)
        {	 	         
            max_customers = num_customers[time_entered];
            max = time_entered;
        }
        if (num_customers[time_entered] < min_customers)
        {	 	         
            min_customers = num_customers[time_entered];
            min = time_entered;
        }
    }
    printf("最大登录人数%d发生在%2d：00到%2d：00之间\n", max_customers, max, max + 1);
    printf("最小登录人数%d发生在%2d：00到%2d：00之间\n", min_customers, min, min + 1);

    return 0;
}	 	         