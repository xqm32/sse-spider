#include <stdio.h>
int main()
{	 	   	         
    int i,j,k,sum;
    sum=0;//2
    for(i=0;i<30;i++)//2
    {	 	   	         
        for(j=0;j<30;j++)//2
        {	 	   	         
            k=30-i-j;//2
            if(i+2*j+5*k==100)//2
            {	 	   	         
                sum++;//2
                printf("%2d,%2d,%2d\n",sum,i,j,k);//2
            }
        }
    }
    return 0;
}	 	   	         