#include <stdio.h>

int main()
{	   	 	  	 	
    int score;

    printf("input the score :");
    scanf("%d", &score);

    if (score < 0 || score > 100)
        printf("score=%d is error!\n", score);
    else if (score >= 90)
        printf("score=%d-->A\n", score);
    else if (score >= 80)
        printf("score=%d-->B\n", score);
    else if (score >= 70)
        printf("score=%d-->C\n", score);
    else if (score >= 60)
        printf("score=%d-->D\n", score);
    else
        printf("score=%d-->E\n", score);

    return 0;
}	   	 	  	 	