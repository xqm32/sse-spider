#include<stdio.h>
int lengthOfLastWord(char* s) {     	   
    int count = 0;
    int newword = 1;
    while (*s != '\0') {     	   
        if (*s == ' ') {     	   
            newword = 1;
        } else {     	   
            if (newword) {     	   
                newword = 0;
                count = 0;
            }
            count++;
        }
        s++;
    }
    return count;
}     	   

int main(int argc, char **argv)
{     	   

    char *ch1[128];
    printf("Please input the string\n");
    gets(ch1);
    int result = lengthOfLastWord(ch1);
    printf("The length of last word is %d\n", result);

 
return 0;
}     	   