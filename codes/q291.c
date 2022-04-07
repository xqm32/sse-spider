#include <stdio.h>
#include <math.h>
int IsPrime(int x)
{  		 	  
    int i,flag=1;
    int squareRoot=sqrt(x);
    if(x<=1)	//1
    {  		 	  
        flag=0;
    }
    for(i=2; i<=squareRoot&&flag; i++)	//2
    {  		 	  
        if(x%i==0)	//1
        {  		 	  
            flag=0;
        }
    }
    return flag;
}  		 	  
main()
{  		 	  
    int n,i;
    printf("Please input n:");
    scanf("%d",&n);
    i=n+1;
    while(i>=n)	//1
    {  		 	  
        if(IsPrime(i))	//1
        {  		 	  
            printf("%d\n",i);	//1
            break;
        }
        else
        {  		 	  
            i++;	//1
        }
    }
}  		 	  