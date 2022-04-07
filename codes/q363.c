main()
{	    	  	 	   
    float average();
    static float a[10]={1.0,1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9};
    printf("The average of array is %f\n",average(a,10));
}	    	  	 	   
float average(a,n)
    int n;
    float a[];
{	    	  	 	   
    int i;
    float sum=0;
    for(i=0;i<n;i++)
        sum+=a[i];
    return sum/n;
}	    	  	 	   
