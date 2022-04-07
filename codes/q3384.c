#include <stdio.h>


#define max 39
int ReadScore(int score[]); 
int fun(int score[], int m, int below_score[], int below_index[]); //1

void main()
{ 	 	 		 	 	 
    int a[max], n = -1;
    int i;

    int below_score[max], below_index[max], below_n;
    n = ReadScore(a); //1
    below_n = fun(a, n, below_score, below_index); //1
    if (n == 0) //1
    { 	 	 		 	 	 
        printf("there are no valid scores\n");
        exit(0);
    }
    printf("the number of the class:%d\n", n);
    printf("the number under the average score: %d\n", below_n);
    for (i = 0; i < below_n; i++)
    { 	 	 		 	 	 
        printf("the %dth score is: %d\n", below_index[i] + 1, below_score[i]); //1
    }

} 	 	 		 	 	 
int ReadScore(int score[])
{ 	 	 		 	 	 
    int i = -1;
   // printf("Input score:");
    do
    { 	 	 		 	 	 
        i++;

        scanf("%d", &score[i]);
    } while (score[i] >= 0); //1
    return i;
} 	 	 		 	 	 
int fun(int score[], int m, int below_score[], int below_index[])
{ 	 	 		 	 	 
    int i, k = 0;
    float aver = 0;

    for (i = 0; i < m; i++)
        aver += score[i]; //1
    aver /= m; //1
    for (i = 0; i < m; i++)
        if (score[i] < aver)
        { 	 	 		 	 	 
            below_score[k] = score[i];//1
            below_index[k] = i;//1
            k++;
        }
    return k;//1
} 	 	 		 	 	 