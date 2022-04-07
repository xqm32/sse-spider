#include<stdio.h>
#define LEN 10
void bubble(int [], int);
main( )
 { 	 	 	    	 
	int  data[LEN], i;
	for (i=0; i<= LEN-1; i++)			/* Input  */
		scanf("%d", &data[i]);
	printf("\n");

    bubble(data, LEN);//2

	for(i=0; i<= LEN-1; i++) 	/*  Output */
		printf("%8d", data[i]);
} 	 	 	    	 

void bubble(int dat[], int length)
{ 	 	 	    	 
    	int head, tail,round,i;
    	int t;

    	head = 0;
    	tail = length - 1;
    		            /*Sorting */
	for (round = head; round <= tail; round++) 		/*round*/
		for (i = tail; i >= round+1; i--)		    /*times i*/
			if ( dat[i] < dat[i-1] )	{	/*exchange½»»»*/
				t=dat[i]; dat[i]=dat[i-1]; dat[i-1]=t;
			}

} 	 	 	    	 

