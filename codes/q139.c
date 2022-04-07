#include <stdio.h>
#define N 100
void inverse(char str[],int m,int n);
main()
{  	    
	char str[N];
	int m,n;
	printf("input m,n:");	//1
	scanf("%d,%d",&m,&n);
	getchar();
	printf("input the string:");	//1
	gets(str);
        inverse(str,m,n);	//2
	printf("the inverse string:%s",str);	//1
}  	    
void inverse(char str[],int m,int n)
{  	    
	int i;
	char a[N];
	for(i=0;i<n;i++)
	{  	    
		a[i]=str[m-1+i];	//1
	}
	for(i=0;i<n;i++)
	{  	    
		str[m+i-1]=a[n-1-i];	//1
	}
}  	    
