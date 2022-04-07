#include <stdio.h>
main()
{	    		  	   
    int a,b,c,d,i,flag;
    for(flag=1,a=0;flag&&a<5;++a)
        for(d=1;flag&&d<5;++d)
        {	    		  	   
            b=a+(a+d)+(a+2*d)+(a+3*d);
            c=a*(a+d)*(a+2*d)*(a+3*d);
            if(b==26&&c==880)
            {	    		  	   
                for(i=0;i<=20;++i)
                    printf("%d, ",a+i*d);
                printf("......\n");
                flag=0;
            }
        }
}	    		  	   
