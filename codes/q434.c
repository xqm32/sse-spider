﻿#include <stdio.h>
#include <stdlib.h>
main()
{   long int i;
    int j,k,l;
    for(i=10000;i<=99999;i++)
        if(i%1000-i%100==400)
            for(j=10;j<=99;j++)
                if(i%j==0&&(l=i/j)%100>=70&&i%100<80&&i%10!=0&&l>100&&l<=999)
                    if(j*(l%10)<100&&j*(l%10)>10)
                        if(j*7%100>=70&&j*7%100<80)
                            if(j*(l/100)%100==77&&j*(l/100)>100)
                                printf("%ld/%d=%d\n",i,j,l);
}	   	     	 	   