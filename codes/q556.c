#include<stdio.h>
int main()
{	   	 	     	  
    int g = 23;
    int k = 3;
    int b, c;
    printf("这里是23根火柴游戏！！\n");
    printf("注意：最大移动火柴数目为三根\n");
    do
    {	   	 	     	  
        printf("请输入移动的火柴数目：\n");
        scanf("%d", &b);

        if (b < 1 || b > 3)
        {	   	 	     	  
            printf("对不起！您输入了不合适的数目，请点击任意键重新输入！\n");
            //printf("您输入移动火柴数目：\n");
            //scanf("%d", &b);
        }
        else
        {	   	 	     	  
            g = g - b;
            printf("您移动的火柴数目为：%d\n", b);
            printf("您移动后剩下的火柴数目为：%d\n", g);


            if (!g || g < 0)
            {	   	 	     	  
                printf("对不起！您输了！\n");
                break;
            }
            else
            {	   	 	     	  
                c = (g - 1) % (k + 1);
                if (!c)c = 1;
                g = g - c;
                printf("计算机移动的火柴数目为：%d\n", c);
                printf("计算机移动后剩下的火柴数目为：%d\n", g);
                if (!g || g < 0)
                {	   	 	     	  
                    printf("恭喜您！您赢了！ \n");
                    break;
                }
            }
        }
    }
    while (g > 0);
    return 0;
}	   	 	     	  