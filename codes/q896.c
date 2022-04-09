union uu
{ 	int a;
	struct
	{	int u;
		float v;
	}b;
}	   	      ;
main()
{	union uu m;
	m.a=200;
	m.b.u=500;
	m.b.v=120.5;
	printf("%d\t%f\n",m.a,m.b.v);
}	   	      