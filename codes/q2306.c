#include <string.h>
void Change(char string[])
{	 	     	   
    int len = strlen(string);
    int i = 0, j = 0;
    for (i = 0; i < len; i++)  //1
    {	 	     	   
        if (string[i] >= 'a' && string[i] <= 'z') //1
        {	 	     	   
            string[i] = string[i] - 'a' + 'A'; //1
        }
    }
}	 	     	   
int main()
{	 	     	   
    char string[100];
    printf("please input a string:"); //1
    gets(string); //1
    Change(string); //1
    printf("changed string is %s\n", string); //1
    return 0;
}	 	     	   