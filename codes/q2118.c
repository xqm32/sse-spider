#include<stdio.h>
int fun(int m);
main()
{	     
    int i,sum;
    int flag;

    sum=0;                   

    for(i=100;i<=200;i++)    //1
    {	     
        flag=fun(i);         
        if(flag)             //1
        {	     
           sum=sum+i;         //1
        }
    }
    printf("sum=%d\n",sum);    //1
}	     
int fun(int m)
{	     
    int i,flag=1;           

    for(i=2;i<m;i++)         //1
    {	     
        if(m%i==0)          //1
        {	     
            flag=0;         
            break;          
         }
    }
    return flag;            
}	     