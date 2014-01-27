#include <stdio.h>
#include "header.h"
#include <stdlib.h>
#include <time.h>
#define SIZE 30000

int main() {
    
    int n;
    int a[SIZE];        /*First Array*/
    int b[SIZE];        /*Second Array Identical to First*/
    int i;              /*Loop to Add Numbers to Array*/
    int iAfterTime;     /*Saves the Time Using Clock Function*/
    int rAfterTime;
    int iBeforeTime;
    int rBeforeTime;
    int itotalTime;
    int rtotalTime;
    
    srand(time(NULL));
    
    for(i = 0; i < SIZE; i++) {
        n = rand() % 3;
        a[i] = n;
        b[i] = n;
    }

    iBeforeTime = clock();
    bubblesort(a, SIZE);
    iAfterTime = clock();
    
    itotalTime = iAfterTime - iBeforeTime;
    itotalTime = (long)itotalTime/CLOCKS_PER_SEC;
  
    rBeforeTime = clock();
    recursiveSort(b, SIZE);
    rAfterTime = clock();
    
    rtotalTime = rAfterTime - rBeforeTime;
    rtotalTime = (long)rtotalTime/CLOCKS_PER_SEC;
    
    printf("Recursive Bubble Sort Time: %d\n", itotalTime);
    printf("Iterative Bubble Sort Time: %d\n", rtotalTime);
    
    return 0;
}
