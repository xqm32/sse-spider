#include <stdio.h>
main()
{int a,i,m,n;
 printf("There are following friendly-numbers pair smaller than 3000:\n");
 for(a=1;a<3000;a++)
 { for(m=0,i=1;i<=a/2;i++)
      if(!(a%i))
       m+=i;
   for(n=0,i=1;i<=m/2;i++)
       if(!(m%i))
          n+=i;
            if(n==a&&a<m)
               printf("   %4d..%4d",a,m);
       }
}	   	   	 	   
