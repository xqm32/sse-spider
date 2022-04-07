#include <stdio.h>
main()
{	    		       
    float data1,data2;
    char op;
    printf("Enter your expression:");
    scanf("%f%c%f",&data1,&op,&data2);
    switch(op)
    {	    		       
        case '+':
            printf("%.2f+%.2f=%.2f\n",data1,data2,data1+data2); break;
        case '-':
            printf("%.2f-%.2f=%.2f\n",data1,data2,data1-data2); break;
        case '*':
            printf("%.2f*%.2f=%.2f\n",data1,data2,data1*data2); break;
        case '/':
            if(data2==0)
                printf("Division by zero\n");
            else
                printf("%.2f/%.2f=%.2f\n",data1,data2,data1/data2);
            break;
        default:
            printf("Unknown operator.\n");
    }
}	    		       
