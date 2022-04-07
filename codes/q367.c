main()
{	    	  	   	 
    char a[30],b[30];
    printf("Enter String:");
    scanf("%s",a);
    strcopy(a,b);
    printf("a=%s\nb=%s\n",a,b);
}	    	  	   	 
strcopy(str1,str2)
    char *str1,*str2;
{	    	  	   	 
    while(*str2++=*str1++);
}	    	  	   	 
