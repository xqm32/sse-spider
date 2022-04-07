#include <stdio.h>
main()
{	    		   
    int count,num,total;
    count=0; total=0;
    while(count<10)
    {	    		   
        count++;
        printf("Enter the No.%d=",count);
        scanf("%d",&num);
        total+=num;
    }
    printf("Total=%d\n",total);
}	    		   
