#include <stdio.h>
unsigned long facto(unsigned int x);
int main()
{	    		      
    int m, k;
    long cmn;
    do
    {	    		      
        printf("Input m,k (m>=k>0):");//1
        scanf("%d,%d", &m, &k);//1
    }
    while (m < k || m < 0 || k < 0); //e1
    cmn = facto(m) / (facto(k) * facto(m - k)); //4
    printf("The combination is %ld\n", cmn); //1
    return 0;
}	    		      
unsigned long facto(unsigned int x)
{	    		      
    unsigned long y;
    for (y = 1; x > 0; --x) //2
        y *= x; //2
    return y;//1
}	    		      