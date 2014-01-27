#include <stdio.h>
#include "header.h"

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void bubblesort(int a[], int n) {
    int i;
    int j;
    
    for (i = 0; i < n; i=i+1) {
        for (j = 0; j < n-i-1; j=j+1) {
            if (a[j] > a[j+1]) {
                swap(&a[j], &a[j+1]);
            }
        }
    }
}

void recursiveSort(int a[], int n) {
    int j;
    
    for (j = 0; j < n-1; j=j+1) {
        if (a[j] > a[j+1]) {
            swap(&a[j], &a[j+1]);
        }
    }
    if (n > 2) {
            recursiveSort(a, n-1);
    }
}
