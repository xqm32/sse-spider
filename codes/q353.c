#include <stdio.h>
#include <math.h>
main()
{	    	 	   
    int i8,i5,i3,i2,i1,n8,n5,n3,n2,n1;
    float max=0,term;
    for(i8=0;i8<3;i8++)
        for(i5=0;i5<=(20-8*i8)/5;i5++)
            for(i3=0;i3<=(20-8*i8-5*i5)/3;i3++)
                for(i2=0;i2<=(20-8*i8-5*i5-3*i3)/2;i2++)
                {	    	 	   
                    i1=20-8*i8-5*i5-3*i3-2*i2;
                    term=2000.0*pow(1+0.0063*12,(double)i1)
                                *pow(1+2*0.0066*12,(double)i2)
                                *pow(1+3*0.0069*12,(double)i3)
                                *pow(1+5*0.0075*12,(double)i5)
                                *pow(1+8*0.0084*12,(double)i8);
                    if(term>max)
                    {	    	 	   
                        max=term;
                        n1=i1;n2=i2;n3=i3;n5=i5;n8=i8;
                    }
                }
    printf("8 year:%d\t 5 year:%d\t 3 year:%d\t",n8,n5,n3);
    printf("2 year:%d\t 1 year:%d\n",n2,n1);
    printf("Total:%.2f\n",max);
}	    	 	   
