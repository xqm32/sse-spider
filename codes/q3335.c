#include <stdio.h>
#define N 10001
void BubbleSort(int a[], int n)
{ 	         
    int  i, j, temp;
    for (i=0; i<n-1; i++)
    { 	         
        for (j=0; j<n-i-1; j++)
        { 	         
            if (a[j] > a[j+1])
            { 	         
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
} 	         
int main()
{ 	         
	int times = 0;
	int p[N];
	int i, j, k, n;
	do
	{ 	         
		printf("请输入数据范围(在1~10000之间):");
		scanf("%d", &n);
	} while (n<1 || n>10000);
            printf("请输入数据:");
	for (i=0; i<n; i++)
	{ 	         
		scanf("%d", &p[i]);
	}
	BubbleSort(p, n);
	for (i=0; i<n; i++)
	{ 	         
		if (p[i] != -2)
		{ 	         
			for (j=i+1; j<n; j++)
			{ 	         
				if (p[j] != -2 && p[j] == p[i]+1)
				{ 	         
					for (k=j+1; k<n; k++)
					{ 	         
						if (p[k] != -2 && p[k] == p[j]+1)
						{ 	         
							p[i] = -2;
							p[j] = -2;
							p[k] = -2;
							times++;
						}
					}
				}
			}
		}
	}
	printf("%d", times);
	return 0;
} 	         



