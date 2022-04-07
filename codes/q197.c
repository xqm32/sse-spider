#include  <stdio.h>
main()
{  	   	   	 
	float  h, w, t;
	printf("Please enter h,w:\n");
	scanf("%f,%f", &h, &w);//1
	t = w / (h * h);//1
	if (t < 18)//1
	{  	   	   	 
		printf("t=%f\tLower weight!\n", t);//1
	}
	if (t >= 18 && t < 25)//1
	{  	   	   	 
		printf("t=%f\tStandard weight!\n", t);//1
	}
	if (t >= 25 && t < 27)//1
	{  	   	   	 
		printf("t=%f\tHigher weight!\n", t);//1
	}
	if (t >= 27)//1
	{  	   	   	 
		printf("t=%f\tToo fat!\n", t);//1
	}
}  	   	   	 