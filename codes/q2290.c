#include <stdio.h>
unsigned int  MyStrlen( char *pstr );
main()
{	 	 		   
   char  a[80];
   unsigned int len;
   printf("Please enter a string:\n");
   gets(a);     //1
   len=MyStrlen( a );           //1
   printf("The length of the string is:%u\n", len);
}	 	 		   
unsigned int  MyStrlen(char *pstr)
{	 	 		   
	  unsigned int  len = 0;        //1
	  for (   ;  *pstr != '\0';  pstr ++ )      //2
	  {	 	 		   
		    len ++;     //1
	  }
	  return  len;
}	 	 		   