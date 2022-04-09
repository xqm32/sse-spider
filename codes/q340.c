#include <stdio.h>
main()
{	    		 	   
    int class1,class2,class3;
    char ch;
    class1=class2=class3=0;
    do
    {	    		 	   
        ch=getchar();
        switch(ch)
        {	    		 	   
            case'0':case'1':case'2':case'3':case'4':
            case'5':case'6':case'7':case'8':case'9':
                class1++;break;
            case'+':case'-':case'*':case'/':case'%':case'=':
                class2++;break;
            default:class3++;break;
        }
    }while(ch!='\\');
    printf("class1=%d, class2=%d, class3=%d\n",class1,class2,class3);
}	    		 	   
