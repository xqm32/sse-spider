#include <stdio.h>
void swap(int *p1,int *p2);   //1
main()
{	 	 		     	  
    int x,y,z;
    int *p1,*p2,*p3;
    printf("please input 3 number x,y,z");
    scanf("%d,%d,%d",&x,&y,&z);    //1
    p1=&x;    //1
    p2=&y;   //1
    p3=&z;   //1
    if(x>y)swap(p1,p2);    //1
    if(x>z)swap(p1,p3);    //1
    if(y>x)swap(p2,p3);    //1
    printf("the sorted numbers are:%d,%d,%d\n",x,y,z);
}	 	 		     	  
void swap(int *p1,int *p2)
{	 	 		     	  
    int temp;
    temp=*p1;    //1
    *p1=*p2;     //1
    *p2=temp;    //1
}	 	 		     	  