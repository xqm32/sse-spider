int main()
{	   	  	 	 		 
    int n, t, number = 20;
    double a = 2, b = 1, s = 0;
    for (n = 1; n <= number; n++)
    {	   	  	 	 		 
        s = s + a / b;
        t = a;
        a = a + b;
        b = t;
    }
    printf("sum is %9.6lf\n", s);
    return 0;
}	   	  	 	 		 