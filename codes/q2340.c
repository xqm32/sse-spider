#include<stdio.h>
int main()
{	 	         
    int x,y;
    printf("Input x:");
    scanf("%d",&x);
    if(-5<=x&&x<=5)
    {	 	         
        y=-x;
    }else if(x==10)
    {	 	         
        y=100;
    }else{	 	         
        y=-x;
    }
    printf("f(%d)=%d",x,y);
}	 	         