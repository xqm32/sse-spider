#include <stdio.h>

main()
{	     
    int i;

    for(i=30;i<100;i++)
    {	     
        if( i*i/1000==((i*i-i*i/1000*1000)/100 )&& ((i*i%100-i*i%10)/10==i*i%10))
              printf("肇事车辆号码为：31%d。",i*i);
    }

}	     