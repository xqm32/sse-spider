# include <stdio.h>
# define PI  3.14  
main()
{   
    int r;
    float area,sum=0;
    for(r=1;r<=10;r++)  //2
    {  
	area=PI*r*r;  //2
	if(area<=50.0)   //2
	{   
		printf("area=%.2f\n",area);  //2
		sum=sum+area;  //2
	}
	else
		break;  //2
    }
    printf("sum=%.2f\n",sum);  //2
}	 	 	     	 	   