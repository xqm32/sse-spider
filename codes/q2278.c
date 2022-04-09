#define N 30 
#include <stdio.h> 
void find_MaxMin(float income[],int n,float *pmax,float *pmin);   //1
main() 
{     
    float income[N],max,min;
    int n,i;     
    scanf("%d",&n);  // 1      
    for(i=0;i<n;i++)    //1 
    {         
        scanf("%f",&income[i]);   //1     
    }     
    find_MaxMin(income,n,&max,&min);  //2
    printf("min=%10.2f,max=%10.2f\n",min,max); 
 } 
 void find_MaxMin(float income[],int n,float *pmax,float *pmin) 
 {     
     int i;
     *pmax=income[0];
     *pmin=income[0];     
     for(i=1;i<n;i++)     
     {         
         if(income[i]>*pmax)
         {             
             *pmax=income[i];         
         }         
         if(income[i]<*pmin)         
         {             
             *pmin=income[i];      
         }      
     } 
}	 	 		     	 	 