﻿#include <stdio.h>
#include <stdlib.h>

struct alpha{   	  	 
char c;
int count;
}   	  	 ;
void quicksort(struct alpha *v[], int left, int right);
int main()
{   	  	 
    struct alpha *x[26];
    int i;
    for (i = 0; i < 26; i ++) {   	  	 
        x[i] = (struct alpha *)malloc(sizeof(struct alpha));
        x[i]->c = 'A' + i;
        x[i]->count = 0;
    }
    char c;
    while((c = getchar()) != '\n') {   	  	 
        if (c >= 'a' && c <= 'z')
            c = c - 'a' + 'A';
        if (c >= 'A' && c <= 'Z')
            x[c - 'A']->count ++;
    }

    quicksort(x, 0, 25);

    for (i = 0; i < 26; i ++)
        printf("%c(%c):%d\n", x[i]->c, 'a' + x[i]->c - 'A', x[i]->count);
    return 0;
}   	  	 

int compare(struct alpha *x1, struct alpha *x2) {   	  	 
    if (x1->count > x2->count)
        return 1;
    else if (x1->count < x2->count)
        return -1;
    else if (x1->c < x2->c)
        return 1;
    else if (x1->c > x2->c)
        return -1;
    else
        return 0;

}   	  	 
void swap(struct alpha *v[], int i, int j)
{   	  	 
    struct alpha *temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}   	  	 


void quicksort(struct alpha *v[], int left, int right)
{   	  	 
    if (left >= right)
        return;
    int last = left;
    int i;
    for ( i = left + 1; i <= right; i ++)
        if(compare(v[i],v[left]) > 0) {   	  	 
            last ++;
            swap(v, last, i);
        }
    swap(v, left, last);
    quicksort(v,left, last - 1);
    quicksort(v, last + 1, right);
}   	  	 
