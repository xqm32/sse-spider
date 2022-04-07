#include <stdio.h>
int main()
{	       	
	int i, a, n, s, m;
	for (a=1000; a<=9999; a++)  //遍历所有的4位数
	{	       	
		  n = a;
		  for (s = 0,i=1; i<=4; i++)
		  {	       	
			m = n % 10;              //求出当前n的最低位
			n = n / 10;              //将n缩小10倍，去掉最低位
			s = s + m * m * m * m; //计算4位数字的4次方之和
		  }
		  if (a == s)    //满足4位数等于其4位数字的4次方之和的即为玫瑰花数
		  { 
			printf("%d\t", a);
		  }
	}
printf("\n");
	return 0;
}	       	
