#include <stdio.h>
main()
{	    		 	 		 
    int n,i,un1,un2,un;
    do
    {	    		 	 		 
        printf("Input n=?");
        scanf("%d",&n);
    }while(n<3);
    un=un2=1;
    for(i=3;i<=n;i++)
    {	    		 	 		 
        un1=un2;un2=un;un=un1+un2;
    }
    printf("No. %d is %d\n",n,un);
}	    		 	 		 
