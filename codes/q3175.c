#include  <stdio.h>
int main()
{	        	 
    int i;
    for (i=1001; i<1111; i++)//遍历所有的9倍之后仍为4位数的数
    {   
        if (i%10*1000+i/10%10*100+i/100%10*10+i/1000 == i*9)//1
        {	        	 
            printf("%d\n",i);//1
        }
    }
    return 0;
}	        	 