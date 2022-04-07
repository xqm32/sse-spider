#include <stdio.h>
int main()
{	    	 	 	  
    int i,j,k;
    for(i=0;i<=3;i++)
    {	    	 	 	  
        for(j=1;j<=5;j++)
        {	    	 	 	  
            k=8-i-j;
            if(0<=k&&k<=6)
            {	    	 	 	  
                printf("hong=%d\t,bai=%d\t,hei=%d\t\n",i,j,k);
            }
        }
    }
    return 0;
}	    	 	 	  