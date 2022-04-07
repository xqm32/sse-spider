#include <stdio.h>
void fun(int n, int *k, int xx[])  //1
{	 	 	  	 	 
    int i,j,l,flag;
    l=0;   
    for(i=2;i<n;i++)   //1
    {	 	 	  	 	 
        flag=1;    //1
        for(j=2;j<i;j++)   //1
        {	 	 	  	 	 
            if(i%j==0)   //1
            {	 	 	  	 	 
                flag=0;   
                break;   //1
            }
        }
        if(flag==1)   //1
        {	 	 	  	 	 
            xx[l]=i;
            l++;
        }
    }
    *k=l;  //1
}	 	 	  	 	 
main()
{	 	 	  	 	 
    int i,n,m,zz[100];
    printf("Please enter an integer number between 10 and 100:\n");
    scanf("%d",&n);
    fun(n,&m,zz);  //2
    printf("There are %d prime numbers less than %d:\n",m,n);
    for(i=0;i<m;i++)   //1
    {	 	 	  	 	 
        printf("%4d",zz[i]);
    }
}	 	 	  	 	 