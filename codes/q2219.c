#include<stdio.h>
int Fun(int a,int b);
int  main()
{	 	   	   	   
    int i,j,k,l,m,n;
    printf("Input two fractions:\n");
    scanf("%d/%d,%d/%d",&i,&j,&k,&l);
    m=Fun(i,l);
    n=Fun(j,k);
    if(m>n)
       printf("%d/%d>%d/%d\n",i,j,k,l);
    else if(m==n)
        printf("%d/%d=%d/%d\n",i,j,k,l);
        else
            printf("%d/%d<%d/%d\n",i,j,k,l);
    return 0;
}	 	   	   	   

int Fun(int a,int b)
{	 	   	   	   
    return a*b;
}	 	   	   	   