#include<stdio.h>
main()
{int a=21,i;
 printf("Game begin:\n");
while(a>0)
    {do
        {printf("How many sticks do you wish to take (1~%d)?",a>4?4:a);
         scanf("%d",&i);
        }while(i>4||i<1||i>a);
          if(a-i>0)
            printf(" %d sticks left in the pile.\n",a-i);
          if((a-i)<=0)
            {	   	    	  
             printf(" You have taken the last sticks.\n");
             printf(" ***You lose!\nGame Over.\n");
             break;
             }
            else
             printf("Computer take %d sticks.\n",5-i);
          a-=5;
          printf(" %d sticks left in the pile.\n",a);
    }
}	   	    	  
