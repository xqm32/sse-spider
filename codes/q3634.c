#include<stdio.h>
#include<math.h>
#include<string.h>
int min(int a, int b, int c)
{   		 	   
    if(a > b)
        return b < c? b : c;
    else
        return a < c? a : c;
}   		 	   

int minDistance(char* s1, char* s2)
{   		 	   
  int len1=strlen(s1), len2=strlen(s2),i,j;
    int *cur = (int*)malloc(sizeof(int)*(len2+1));
    int pre = 0;
    for(  i = 0; i <= len2; i++)
        cur[i] = i;
    for(  i = 1; i <= len1; i++)
    {   		 	   
        pre = cur[0];
        for(  j = 1; j <= len2; j++)
        {   		 	   
            int t = cur[j]; //store the previous value of the previous row before being overwrittern;
            cur[j] = s1[i-1] == s2[j-1]? pre : min(cur[j-1], cur[j], pre) + 1;
            pre = t;
        }
        cur[0] = i;
    }
    return cur[len2];
}   		 	   
int main(int argc, char **argv)
{   		 	   

    char ch1[128];
    printf("Please input the first string\n");
    gets(ch1);
     char ch2[128];
    printf("Please input the second string\n");
    gets(ch2);
    int dis  = minDistance(ch1,ch2);
    printf("The distance is %d\n", dis);


return 0;
}   		 	   