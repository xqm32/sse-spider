#include <stdio.h>

int main()
{	 	      
    double magnitude;

    printf("请输入地震的里氏强度: ");
    scanf("%lf", &magnitude);

    if (magnitude < 4.0)
    {	 	      
        printf("本次地震后果：很小！");
    }
    else if (magnitude < 5.0)
    {	 	      
        printf("本次地震后果：窗户晃动！");
    }
    else if (magnitude < 6.0)
    {	 	      
        printf("本次地震后果：墙倒塌；不结实的建筑物被破坏！");
    }
    else if (magnitude < 7.0)
    {	 	      
        printf("本次地震后果：烟囱倒塌；普通建筑物被破坏！");
    }
    else if (magnitude < 8.0)
    {	 	      
        printf("本次地震后果：地下管线破裂；结实的建筑物也被破坏！");
    }
    else
    {	 	      
        printf("本次地震后果：地面波浪状起伏；大多数建筑物损毁！");
    }

    return 0;
}	 	      