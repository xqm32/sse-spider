#include <stdio.h>

#define		N	2
#define		M	5

float score[N][M];
float a_stu[N], a_cor[M];

int main(void)
{	    		 	   
    int i, j, r, c;
    float h;
    float s_diff(void);
    float highest(int *, int *);

    r = 0;
    c = 1;
    input_stu();
    avr_stu();
    avr_cor();
    printf("\n 序号     课程1     2     3     4     5     平均分\n");
    for (i = 0; i < N; i++)
    {	    		 	   
        printf("\n NO%2d", i + 1);
        for (j = 0; j < M; j++)
        {	    		 	   
            printf("%8.2f", score[i][j]);
        }
        printf("%8.2f", a_stu[i]);
    }

    printf("\n课平均");
    for (j = 0; j < M; j++)
    {	    		 	   
        printf("%8.2f", a_cor[j]);
    }
    h = highest(&r, &c);
    printf("\n\n最高分%8.2f是%d号学生的第%d门课\n", h, r, c);
    printf("\n方差 %8.2f", s_diff());

    return 0;
}	    		 	   

input_stu(void)
{	    		 	   
    int i, j;

    for (i = 0; i < N; i++)
    {	    		 	   
        printf("\n输入学生%4d的5个成绩：\n", i + 1);
        for (j = 0; j < M; j++)
        {	    		 	   
            scanf("%f", &score[i][j]);
        }
    }
}	    		 	   

avr_stu(void)
{	    		 	   
    int i, j;
    float s;

    for (i = 0; i < N; i++)
    {	    		 	   
        for (j = 0, s = 0; j < M; j++)
        {	    		 	   
            s += score[i][j];
        }
        a_stu[i] = s / 5.0;
    }
}	    		 	   

avr_cor(void)
{	    		 	   
    int i, j;
    float s;

    for (j = 0; j < M; j++)
    {	    		 	   
        s = 0;
        for (i = 0; i < N; i++)
        {	    		 	   
            s += score[i][j];
        }
        a_cor[j] = s / (float)N;
    }
}	    		 	   

float highest(int *r, int *c)
{	    		 	   
    float high;
    int i, j;

    high = score[0][0];
    for (i = 0; i < N; i++)
    {	    		 	   
        for (j = 0; j < M; j++)
        {	    		 	   
            if (score[i][j] > high)
            {	    		 	   
                high = score[i][j];
                *r = i + 1;
                *c = j + 1;
            }
        }
    }
    return high;
}	    		 	   

float s_diff(void)
{	    		 	   
    int i, j;
    float sumx, sumxn;

    sumx = 0.0;
    sumxn = 0.0;

    for (i = 0; i < N; i++)
    {	    		 	   
        sumx += a_stu[i] * a_stu[i];
        sumxn += a_stu[i];
    }
    return (sumx / N - (sumxn / N) * (sumxn / N));
}	    		 	   

