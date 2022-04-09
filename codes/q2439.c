#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{	 	   
    char *country[] = {"Australia", "Belgium", "China", "Denmark", "England", "France", "Greece", "Ireland", "Scotland", "Wales"};
    char *capital[] = {"Canberra", "Brussels", "Beijing", "Copenhagen", "London", "Paris", "Athens", "Dublin", "Edinburgh", "Cardiff"};
    char input_country[20];
    int i;

    printf("请输入国家名：");
    gets(input_country);

    for (i = 0; i < 10; i++)
    {	 	   
        if (!strcmp(input_country, country[i]))
        {	 	   
            printf("%s的首都为%s！", input_country, capital[i]);
            exit(0);
        }
    }

    printf("你输入的国家%s没有找到它的首都！", input_country);

    return 0;
}	 	   