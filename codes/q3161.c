#include<stdio.h>
int main()
{	   		 
    float dat1, dat2;
    char op;

    scanf("%f%c%f", &dat1, &op, &dat2);                             //1

    if (op == '+')                                                  //1
        printf("%.2f%c%.2f=%.2f\n", dat1, op, dat2, dat1 + dat2);   //1
    else if (op == '-')                                             //1
        printf("%.2f%c%.2f=%.2f\n", dat1, op, dat2, dat1 - dat2);   //1
    else if (op == '*')                                             //1
        printf("%.2f%c%.2f=%.2f\n", dat1, op, dat2, dat1 * dat2);   //1
    else if (op == '/')                                             //1
    {	   		 
        if (dat2 != 0)                                              //1
            printf("%.2f%c%.2f=%.2f\n", dat1, op, dat2, dat1 / dat2);//1
        else                                                         //1
            printf("dat is 0!Error!\n");                             //1
    }
    else                                                             //1
    {	   		 
         printf("Error!\n");                                          //1
    }
    return 0;
}	   		 