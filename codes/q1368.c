#include <stdio.h>
void main(void)
{	        
    int i, sum=0; 
float avg;
int sc[10], *p=sc;

for (i=0; i<10; i++)
{	        
		scanf("%d", p); 
		p++;
		sum+= *(p-1);   
}	        
avg = (float)sum/ 10; 
printf("avg=%f", avg);
}	        
