﻿#include <stdio.h>
main( )
{	    		 
int  up=9, low=0, mid,found=0, find;
  int  a[10]={1, 5, 6, 9, 11, 17, 25, 34, 38, 41};
  	scanf("%d", &find);
  printf("\n");
  while (up>=low  &&  !found)
       {	    		 
				mid=(up+low)/2;
         	if(a[mid]==find)
             	{	    		 
							found=1;  
							break;
						}
         	else  if(a[mid]>find)
              	up=mid-1;
         	else    
						low=mid+1;
        }
if(found) printf("found number is %dth",mid);
else  printf("no  found");
}	    		 
