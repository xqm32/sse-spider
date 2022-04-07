#include <stdio.h>
#include <math.h>
int main()
{	  		   	 
    int a, b, digit, pos, i, j, k;
    int d0=0, d1=0, d2=0, d3=0, d4=0, d5=0, d6=0, d7=0, d8=0, d9=0;
    int counter = 1;
    printf("Please enter the number:\n");
    scanf("%d", &a);
    b = a / 10;//1
    while (b != 0)   //1
    {	  		   	 
        counter++;//1
        b = b / 10;//1
    }
    printf("%d: %d bits\n", a, counter);
    pos = counter;
    for (i=1; i<=counter; i++)      //1
    {	  		   	 
        pos--;//1
        k = 1;
        for (j=1; j<=pos; j++)//1
        {	  		   	 
            k = k * 10;//1
        }
        digit = fabs(a / k);         //1
        switch (digit)               //1
        {	  		   	 
        case 0://1
            d0++;//1
            break;//1
        case 1:
            d1++;
            break;
        case 2:
            d2++;
            break;
        case 3:
            d3++;
            break;
        case 4:
            d4++;
            break;
        case 5:
            d5++;
            break;
        case 6:
            d6++;
            break;
        case 7:
            d7++;
            break;
        case 8:
            d8++;
            break;
        case 9:
            d9++;
            break;
        default:
            printf("error\n");
        }
        a = fabs(a) - digit * k;    //1
    }
    if (d0 != 0) printf("0: %d\n", d0);//1
    if (d1 != 0) printf("1: %d\n", d1);
    if (d2 != 0) printf("2: %d\n", d2);
    if (d3 != 0) printf("3: %d\n", d3);
    if (d4 != 0) printf("4: %d\n", d4);
    if (d5 != 0) printf("5: %d\n", d5);
    if (d6 != 0) printf("6: %d\n", d6);
    if (d7 != 0) printf("7: %d\n", d7);
    if (d8 != 0) printf("8: %d\n", d8);
    if (d9 != 0) printf("9: %d\n", d9);
    return 0;
}	  		   	 
