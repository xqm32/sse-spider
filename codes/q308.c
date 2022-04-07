#include  <stdio.h>
int main()
{  	  
    float  h, w, t;

    printf("Please enter h,w:\n");
    scanf("%f,%f", &h, &w);          //1

    t = w / (h * h);                 //1

    if (t < 18)                      //1
    {  	  
        printf("Lower weight!\n");
    }

    if (t >= 18 && t < 25)           //1
    {  	  
        printf("Standard weight!\n");
    }

    if (t >= 25 && t < 27)           //1
    {  	  
        printf("Higher weight!\n");
    }

    if (t >= 27)                     //1
    {  	  
        printf("Too fat!\n");
    }

    return 0;
}  	  