#include<stdio.h>
int main()
{	    	   	
    int i, m, flag = 1;
    int a = 0, b = 0;

    printf("Please enter the number:\n");
    for (i = 1; flag; i++)          //2
    {	    	   	
        scanf("%d", &m);            //1
        if (m == -1 && i == 1)      //2
        {	    	   	
            flag = 0;               //1
            printf("over!\n");      //1
        }
        else if (m == -1)           //1
        {	    	   	
            flag = 0;               //1
        }
        else if (m % 2 == 0)        //1
        {	    	   	
            printf("%d:even\n", m); //1
            a++;                    //1
        }
        else                        //1
        {	    	   	
            printf("%d:odd\n", m);  //1
            b++;                    //1
        }
    }
    if (i != 1)                     //2
    {	    	   	
        printf("The total number of odd is %d\n", b);//1
        printf("The total number of even is %d\n", a);//1
    }
    return 0;
}	    	   	