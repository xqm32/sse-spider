#include "math.h"
main()
{int i,j,k,c;
 for(i=1;i<=9;i++)
   for(j=0;j<=9;j++)
     if(i!=j)
     { k=i*1000+i*100+j*10+j;
       for(c=31;c*c<k;c++);
       if(c*c==k)
          printf("Lorry_No. is %d .\n",k);
     }
}	   	   	 	  
