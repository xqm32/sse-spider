 #define MAX 2147483647
 #include <stdio.h>
 main()
 {long int n,m,re();
  int  count=0;
  printf("please enter a number optionaly:");
  scanf("%ld",&n);
  printf("The generation process of palindrome:\n");
  while(!nonre((m=re(n))+n))
  {	   	    	 	 
       if(m+n>=MAX)
       {  printf("  input error, break.\n");
          break;
       }
       else
       {printf("   [%d]: %ld+%ld=%ld\n",++count,n,m,m+n);
        n+=m;
       }
  }
  printf("   [%d]: %ld+%ld=%ld\n",++count,n,m,m+n);

  printf("Here we reached the aim at last !\n");
}	   	    	 	 
long re(a)
   long int a;
{  long int t;
   for(t=0;a>0;a/=10)
     t=t*10+a%10;
     return(t);
}	   	    	 	 
nonre(s)
   long int s;
   {if(re(s)==s)
      return(1);
    else
      return(0);
   }
