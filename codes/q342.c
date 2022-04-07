#include <stdio.h>
main()
{	    		   	
    int i,count,j,sum;
    sum=count=0;
    for(i=1;i<=10;i++)
    {	    		   	
        printf("Input integer:");
        scanf("%d",&j);
        if(j<=0) continue;
        count++;
        sum+=j;
    }
    if(count)
        printf("Plus number:%d,average value:%.2f",count,1.0*sum/count);
    else printf("Plus number:0,average value: 0");
}	    		   	
