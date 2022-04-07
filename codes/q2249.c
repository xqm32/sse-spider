#include<stdio.h>
int main()
{	 	 		 	    	
    int x,y,z,m,count=0,n=0;
    printf("请输入上限值m:");
    scanf("%d",&m);
    printf("m以内的勾股数组有:\n");
    for(x=1;x<=m;x++)
    {	 	 		 	    	
        for(y=1;y<=m;y++)
        {	 	 		 	    	
            for(z=1;z<=m;z++)
            {	 	 		 	    	
                if(x*x+y*y==z*z&&x<y&&y<z)
                {	 	 		 	    	
                    n++;
                printf("(%d  %d  %d)\t",x,y,z);
                count++;
                if(n%3==0)
                    printf("\n");
                }
            }
        }
    }
    printf("\n共%d组勾股数.",count);
    return 0;
}	 	 		 	    	