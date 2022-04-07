struct s
{	      	
	char name[10];
	int age;
}	      	; 
main()
{	      	
	struct s a[3] = {"John",19,"Paul",17,"Marry",18};
	struct s *p; 

	for(p = a; p < a+3; p++)
	{	      	
		printf("%s,%d\n", p->name, p->age );
	}
	
}	      	
