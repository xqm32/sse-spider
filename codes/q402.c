#include <stdio.h>
main()
{ static int a[2][3]={1,2,3,4,5,6};
  static int b[3][2]={1,1,0,2,2,0};
  int c[2][2],i,j;
  mat (a,b,c,2,2,3);
  printf("array A=\n");
  printa(a,2,3);
  printf("array B=\n");
  printa(b,3,2);
  printf("array C=\n");
  printa(c,2,2);
}	   	   	 	  	
mat(a,b,c,m,n,k)
  int m,n,k,a[][3],b[][2],c[][2];
 {int i,j,l;
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
      for(c[i][j]=0,l=0;l<k;l++)
         c[i][j]+=a[i][l]*b[l][j];
 }
 printa(a,m,n)
   int *a,m,n;
 { int i,j;
   for(i=0;i<m;i++,printf("\n"))
     for(j=0;j<n;j++,a++)
        printf("\t%d",*a);
 }
