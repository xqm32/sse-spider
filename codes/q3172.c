#include  <math.h>
#include  <stdio.h>
int main()
{ 
	int n, a, b;	
	printf("Input n:");//1
	scanf("%d", &n);
	a = n / 100; //1
      b = n % 100;    //1	
      printf("%d,%d\n", a, b); //1
	printf("sum=%d,sub=%d,multi=%d\n", a+b, a-b, a*b);//1
	if (b != 0) //2
	{		
           printf("dev=%.2f,mod=%d\n",(float)a/b, a%b);//2
	}
	else
	{	  		 
	printf("The second operator is zero!\n");//2
	}
	return 0;
}	  		 