int a[9]={0,1,2,5,8,7,6,3};
int b[9];
int c[9];
int count=0;
main()
{int i,j,k,t;
void print();
printf("Please enter original order of digits 1~8:");
for (i=0;i<8;i++)
    scanf("%d",&b[a[i]]);
printf("The sorting process is as felow:\n");
print();
for(t=-1,j=0;j<8 && t==-1;j++)
   if(b[a[j]==1]) t=j;
for(j=0;j<8;j++)
    c[j]=a[(j+t)%8];
for(i=2;i<9;i++)
    for(j=i-1;j<8;j++)
    if(b[c[j]]==i&&j!=i-1)
    { b[4]=i;
      b[c[j]]=0;
      print();
      for (k=j;k!=i-1;k--)
      {	   	   		 		 
          b[c[k]]=b[c[k-1]];
          b[c[k-1]]=0;
          print();
      }
      b[c[k]]=i;
      b[4]   =0;
      print();
      break;
    }
    else if(b[c[j]==i])
         break;
}	   	   		 		 
void print(void)
{ int c;
  for(c=0;c<9;c++)
    if(c%3==2)
        printf("%2d\n",b[c]);
    else
        printf("%2d",b[c]);
  printf("---%2d---\n",count++);
}	   	   		 		 
