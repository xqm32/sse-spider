#include<stdio.h>
#include<String.h>
#include<stdbool.h>
int calc(int jx,int py,bool yx,bool wd,bool mq)//1
{	    	   
	int sum=0;
	if(jx>80 && mq) sum+=8000;
	if(jx>85&& py>80) sum+=4000;
	if(jx>90) sum+=2000;
	if(wd&&jx>85) sum+=1000;
	if(yx&&py>80) sum+=850;
	return sum;
}	    	   

int main()
{	    	   

	int m;
	scanf("%d",&m);
	int max_num=0,sum=0;
	char win[20];
	while(m--)//1
		{	    	   
		    int jx,py;
            char xm[20],yxs[3],wds[3],mqs[3];
			scanf("%s%d%d%s%s%s",xm,&jx,&py,yxs,wds,mqs);//1
			bool yx=strcmp(yxs,"Y"),wd=strcmp(wds,"Y"),mq=strcmp(mqs,"Y");
			int num=calc(jx,py,!yx,!wd,!mq);//1
			sum+=num;//1
			if(num>max_num) {//1
				max_num=num;//1
			    strcpy(win,xm);
			}
		}
		printf("%s\n%d\n%d\n",win,max_num,sum);
	return 0;
}	    	   