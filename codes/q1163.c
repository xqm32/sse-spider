#include <stdio.h>
struct date
{	    	 	   	 
	int  y,m,d;
}	    	 	   	 ;
struct stu
{	char n[10];
	struct date b;
	int a;
}	    	 	   	 s={"Wang",{1980,11,11},30};
main()
{	    	 	   	 
	printf("%s,%d,%d\n",s.n,s.b.d,s.a);
}	    	 	   	 