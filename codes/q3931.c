#include <stdio.h>
#include <math.h>
int Fan(int n);
int main()
{  	 	  		 
    int n,m;
    printf("Enter number:");
    scanf("%d",&n);
     
    m = Fan(n);
    printf("%d",m);
    return 0;
}  	 	  		 
int Fan(int n)
{  	 	  		 
    int i,a[20],x;
    double m=0;
    for(i = 0;;i++)
    {  	 	  		 
        a[i]=n%10;
        if(n/10==0)
            break;
        else
            n = n/10;
    }
    for(x = 0;x<=i;x++)
    {  	 	  		 
        m = m+a[x]*pow(10,i-x);
    }
    return (int)m;
}  	 	  		 