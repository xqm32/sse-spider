#include<stdio.h>
main()
{	       		 		 
  int i,j,k,n;
  for(n=100;n<1000;n++)
  {	       		 		 
    i=n/100;//1
    j=(n-i*100)/10;//1
    k=n-i*100-j*10;//1
    if(i*i*i+j*j*j+k*k*k==n)
      printf("%d\n",n);

  }

}	       		 		 