#include <stdio.h>
main()
{int i,j,k,l,m,n;
printf("Input two FENSHU :\n");
scanf("%d%d,%d%d",&i,&j,&k,&l);
m=zxgb(j,l)/j*i;
n=zxgb(j,l)/l*k;
if(m>n)
         printf("%d/%d>%d/%d\n",i,j,k,l);
else if(m==n)
         printf("%d/%d=%d/%d\n",i,j,k,l);
     else printf("%d/%d<%d/%d\n",i,j,k,l);
}	   	     	
zxgb(a,b)
  int a,b;
{ long int c;
  int d;
  if(a<b) c=a,a=b,b=c;
  for(c=a*b;b!=0;)
  {d=b;b=a%b;a=d;}
  return((int)c/a);
}	   	     	
