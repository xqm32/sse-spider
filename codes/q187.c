#include <stdio.h>
#define N 40
int Average(int score[], int n);
int ReadScore(int score[]);
int GetAboveAver(int score[], int n);
main() {  	  	    
    int score[N], m, n;
    n = ReadScore(score);//1
    printf("Total students are %d\n", n);//1
    m = GetAboveAver(score, n);//1
    printf("Students of above average is %d\n", m);//1
}  	  	    
int Average(int score[], int n) {  	  	    
    int i, sum = 0;
    for (i = 0; i < n; i++)//1
    {  	  	    
        sum += score[i];//1
    }
    return sum / n;//1
}  	  	    
int ReadScore(int score[]) {  	  	    
    int i = -1;
    do {  	  	    
        i++;
        scanf("%d", &score[i]);//1
    } while (score[i] >= 0);//e2
    return i;//1
}  	  	    
int GetAboveAver(int score[], int n) {  	  	    
    int i, count = 0, aver;
    aver = Average(score, n);//1
    printf("Average score is %d\n", aver);//1
    for (i = 0; i < n; i++)//1
    {  	  	    
        if (score[i] >= aver) //1
            count++;//1
    }
    return count;//1
}  	  	    