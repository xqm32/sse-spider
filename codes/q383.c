﻿#include <stdio.h>
struct date
{	    	    	 	 
  int year,month,day;
}	    	    	 	 ;

main()
{	    	    	 	 
  struct date today,term;
  int yeardays=0,day;
  printf("Enter year/month/day:");
  scanf("%d%d%d",&today.year,&today.month,&today.day);
  term.month=12;
  term.day=31;
  for(term.year=1990;term.year<today.year;term.year++)
      yeardays+=days(term);
  yeardays+=days(today);
  day=yeardays%5;
  if(day>0&&day<4)
        printf("He is fishing.\n");
    else
        printf("He is sleeping.\n");
}	    	    	 	 
  days(day)
    struct date day;
    {	    	    	 	 
      static int day_tab[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},
                                 {0,31,29,31,30,31,30,31,31,30,31,30,31}};
      int i,lp;
      lp=day.year%4==0&&day.year%100!=0||day.year%400==0;
      for(i=1;i<day.month;i++)
         day.day+=day_tab[lp][i];
       return (day.day);
    }