#include<stdio.h>
main()
{	 	  		    
    int a,b,c;    //1

    for(a=1;a<=20;a++)      //3
    {	 	  		    
        for(b=a;b<=20;b++)  //3
    	{	 	  		    
            for(c=b;c<=20;c++)   //3
    	    {	 	  		    
                if(c*c==a*a+b*b)    //2
                    printf("a=%d\tb=%d\tc=%d\n",a,b,c);   //2
    	    }
    	}
    }
}	 	  		    