#include <stdio.h>
#include <string.h>
#include <math.h>
#define eps 1e-6
#define M 1000005
int p[M];

void prime() {    	    	
    memset(p, 0, sizeof (p));
    p[0] = p[1] = 1;
    int i, j;
    for (i = 2; i < M; i++) {    	    	
        if (!p[i])
            for (j = 2; j * i < M; j++)
                p[i * j] = 1;
    }
}    	    	

int main() {    	    	
    int n;
    long long a;
    prime();
    scanf("%d", &n);
    int i;
    while (n--) {    	    	
        scanf("%I64d", &a);
        long long t = (long long) (sqrt((double)(a)) + 1 - eps);
        if (t * t == a && !p[t]) {    	    	
            printf("YES\n");
        } else
            printf("NO\n");
    }

    return 0;
}    	    	