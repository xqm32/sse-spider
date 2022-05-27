#include <math.h>
#include <stdio.h>
#define N 30
typedef struct athletes
{		 		 	  
    int numbercode;
    float score[20];
    int aver;
    float sum ;
}		 		 	  W;
struct judge
{		 		 	  
    float num;
    int l;
}		 		 	  ;
int main()
{		 		 	  

    struct judge q[N];
    W a[N];
    float min,max;
    float sum =0;
    int i,n,m,k,j;
    printf("How many Athletes?");
    scanf("%d",&n);
    printf("How many judges?");
    scanf("%d",&m);
    printf("Scores of Athletes:\n");

    for(i=1; i<n+1; i++)
    {		 		 	  
        printf("\n\n\n");
        printf("Athlete %d is playing.\n",i);
        printf("Please enter his number code:");
        scanf("%d",&a[i].numbercode);
        for(j=1; j<m+1; j++)
        {		 		 	  
            printf("Judge %d gives score:",j);
            scanf("%f",&a[i].score[j]);
        }
        max = a[i].score[1];
        for(k=2; k<=m; k++)
        {		 		 	  
            if(a[i].score[k]>max)
            {		 		 	  
                max = a[i].score[k];
            }
        }
        printf("Delete a maximum score:%.1f",max);
        min = a[i].score[1];
        for(k=2; k<=m; k++)
        {		 		 	  
            if(a[i].score[k]<min)
            {		 		 	  
                min = a[i].score[k];
            }
        }
        printf("Delete a minimum score:%.1f\n",min);
        a[i].sum =0;
        for(k=1; k<=m; k++)
        {		 		 	  
            a[i].sum=a[i].sum +a[i].score[k];
        }
        a[i].sum =(a[i].sum -min-max)/(m-2);
        printf("The final score of Athlete %d is %.3f\n",a[i].numbercode,a[i].sum);

    }
    printf("Order of Athletes:\n");
    printf("order   final score number code\n");
    for(i=1; i<n; i++)
    {		 		 	  
        for(j=i+1; j<=n; j++)
        {		 		 	  
            if(a[i].sum<a[j].sum)
            {		 		 	  
                a[n+1]=a[j];
                a[j]=a[i];
                a[i]=a[n+1];
            }
        }
    }
    for(i=1; i<=n; i++)
    {		 		 	  
        printf("    %d    %.3f    %d\n",i,a[i].sum,a[i].numbercode);
    }
    for(i=1; i<=m; i++)
    {		 		 	  
        sum=0;
        for(j=1; j<=n; j++)
        {		 		 	  
            sum = sum + pow(a[j].score[i]-a[j].sum,2);
        }
        q[i].num=10-sqrt(sum/n);
        q[i].l=i;
    }
    for(i=1; i<m; i++)
    {		 		 	  
        for(j=i+1; j<=m; j++)
        {		 		 	  
            if(q[i].num<q[j].num)
            {		 		 	  
                q[20] = q[j];
                q[j] = q[i];
                q[i] = q[20];
            }
        }
    }
    printf("Order of judges:\n");
    printf("order   final score number code\n");
    for(i=1; i<=n; i++)
    {		 		 	  
        printf("    %d    %.3f    %d\n",i,q[i].num,q[i].l);
    }
    printf("Over!Thank you!");
    return 0;
}		 		 	  
