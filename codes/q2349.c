#include <stdio.h>

void fun(int m, int *k, int xx[])
{	 	       	 
    int i,j,t;
    int n=0;
    for(i=2;i<m;i++)
    {	 	       	 
        t=1;
        for(j=2;j<i;j++)
        {	 	       	 
            if(i%j==0)
            {	 	       	 
                t=0;
                break;
            }
        }
        if(t==1)
        xx[n++]=i;
    }
    *k=n;
}	 	       	 
main()
{	 	       	 
    int m,n,zz[100];
    printf("Please enter an integer number between 10 and 100:\n");
    scanf("%d",&n);
    fun(n,&m,zz);
    printf("There are %d prime numbers less than %d:\n",m,n);
    for(n=0;n<m;n++)
    {	 	       	 
        printf("%4d",zz[n]);
    }
}	 	       	 