#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5

const char PHONE[N][5] = {"0086", "0033", "0044", "001", "0065"};
const char COUNTRY[N][20] = {"China", "France", "England", "USA", "Singapore"};
const char REGION[N][20] = {"Asia", "European", "European", "America", "Asia"};

typedef struct t_PhoneData
{  	  	   
    char phone[5];
    char country[20];
    char region[20];
}  	  	    PhoneData;

int main()
{  	  	   
    PhoneData data[N];
    int i;
    for (i = 0; i < N; ++i)
    {  	  	   
        strcpy(data[i].phone, PHONE[i]);
        strcpy(data[i].country, COUNTRY[i]);
        strcpy(data[i].region, REGION[i]);
    }

    int j;
    // sort
    for (i = 0; i < N - 1; ++i)
    {  	  	   
        for (j = N - 1; j > i; --j)
        {  	  	   
            if (strlen(data[j].phone) < strlen(data[j - 1].phone))
            {  	  	   
                PhoneData tmp = data[j];
                data[j] = data[j - 1];
                data[j - 1] = tmp;
            }
            else if (strlen(data[j].phone) == strlen(data[j - 1].phone))
            {  	  	   
                int k;
                for (k = 0; k < strlen(data[j].phone); ++k)
                {  	  	   
                    if (data[j].phone[k] < data[j - 1].phone[k])
                    {  	  	   
                        PhoneData tmp = data[j];
                        data[j] = data[j - 1];
                        data[j - 1] = tmp;
                        break;
                    }
                }
            }
        }
    }
    /*for (i = 0; i < N; ++i)
        printf("%s,%s,%s\n", data[i].phone, data[i].country, data[i].region);*/
    // query
    char query_phone[10];
    scanf("%s", query_phone);
    for (i = 0; i < N; ++i)
    {  	  	   
        if (!strcmp(query_phone, data[i].phone))
        {  	  	   
            printf("%s, %s\n", data[i].country, data[i].region);
            break;
        }
    }
    if (i == N)
        printf("Not found.\n");
    return 0;
}  	  	   
