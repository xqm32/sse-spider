#include  <stdio.h>
main()
{	         	 	  
	char sex;				     /* 孩子的性别 */
	char sports;			/* 是否喜欢体育运动 */
	char diet;			/* 是否有良好的饮食习惯 */
	float myHeight;		/* 孩子身高 */
	float faHeight;		/* 父亲身高 */
	float moHeight;		/* 母亲身高 */
	printf("Are you a boy(M) or a girl(F)?");  //2
	scanf(" %c", &sex); //1  /* 在%c前加一个空格，将存于缓冲区中的回车符读走 */
	printf("Please input your father's height(cm):");
	scanf("%f", &faHeight);
	printf("Please input your mother's height(cm):"); //2
	scanf("%f", &moHeight); //2
	printf("Do you like sports(Y/N)?"); //2
	scanf(" %c", &sports);/* %c前加一空格，读走缓冲区中的回车符 */
	printf("Do you have a good habit of diet(Y/N)?");
	scanf(" %c", &diet); /* %c前加一空格，读走缓冲区中的回车符 */
	if (sex == 'M' || sex == 'm') //2
		myHeight = (faHeight + moHeight) * 0.54; //2
	else
		myHeight = (faHeight * 0.923 + moHeight) / 2.0; //2
	if (sports == 'Y' || sports == 'y') //2
		myHeight = myHeight * (1 + 0.02); //2
	if (diet == 'Y' || diet == 'y') //2
		myHeight = myHeight * (1 + 0.015 );//2
	printf("Your future height will be %.0f(cm)\n", myHeight); //2
}	         	 	  