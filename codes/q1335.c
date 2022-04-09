#include<stdio.h>
int main()
{	            
    char ch[80], *p;
    int i, count[5] = {0};
    printf("Input a line of characters:\n");
    gets(ch);
    for (p = ch; *p != '\0'; p++)
    {	            
        switch (*p)
        {	            
        case 'a':
            count[0]++;
            break;
        case 'e':
            count[1]++;
            break;
        case 'i':
            count[2]++;
            break;
        case 'o':
            count[3]++;
            break;
        case 'u':
            count[4]++;
        }
    }
    for (i = 0; i < 5; i++)
    {	            
        printf("%4d", count[i]);
    }
    return 0;
}	            

