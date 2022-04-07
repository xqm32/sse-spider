#include <stdio.h>

int main()
{	   	 	 		     
    int score, max, min, i, sum;
    max = -32768;
    min = 32767;
    sum = 0;
    for (i = 1; i <= 10; i++)
    {	   	 	 		     
        printf("Input score %d\n", i);
        scanf("%d", &score);
        sum += score;
        if (score > max)
            max = score;
        if (score < min)
            min = score;
    }
    printf("Canceled max score: %d\nCanceled min score: %d\n", max, min);
    printf("Average score: %d\n", (sum - max - min) / 8);

    return 0;
}	   	 	 		     