﻿#include<stdio.h>
#include<string.h>
 
struct candidate                                        /*定义结构体类型*/
{    	  	 	 	   
    char name[20];                                      /*存储名字*/
    int count;                                          /*存储得票数*/
}    	  	 	 	    cndt[3]={{"王",0},{"张",0},{"李",0}};                    /*定义结构体数组*/
 
void main()
{    	  	 	 	   
    int i,j;                                                /*声明变量*/
    char Ctname[20];                        //1         /*声明数组*/
    for(i=1;i<=10;i++)                       //1         /*进行10次投票*/
    {    	  	 	 	   
        scanf("%s",Ctname);             //1         /*输入候选人姓名*/
        for(j=0;j<3;j++)        //1
        {    	  	 	 	   
            if(strcmp(Ctname,cndt[j].name)==0)  //2     /*字符串比较*/
                cndt[j].count++;                //1         /*给相应的候选人票数加一*/
        }
    }
    for(i=0;i<3;i++) //1
    {    	  	 	 	   
        printf("%s : %d\n",cndt[i].name,cndt[i].count); //2     /*输出投票结果*/
    }
}    	  	 	 	   