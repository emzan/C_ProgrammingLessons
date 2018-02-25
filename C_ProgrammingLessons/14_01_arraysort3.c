//
//  14_01_arraysort3.c
//  C_ProgrammingLessons
//
//  Created by George Martinson on 24/02/2018.
//  Copyright © 2018 kuangchi. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100000

int compare(const void *a, const void *b);

int main()
{
    int numbers[SIZE];
    int x;
    
    /* Sort the array */
    srand((unsigned)time(NULL));
    for (x = 0; x < SIZE; x++)
        numbers[x] = rand() % 10000000 + 1;
    
    /* Display the sorted array */
    puts("Sorted array:");
    for (x = 0; x < SIZE; x++)
        printf(" %3d",numbers[x]);
    putchar('\n');
    
    /* Sort the array. The following is a quicksort method, more efficient, prototyped in the sdtlib */
    qsort(numbers,SIZE,sizeof(int),compare);
    
    /* Display the sorted array */
    puts("Sorted array:");
    for (x = 0; x < SIZE; x++)
        printf(" %3d",numbers[x]);
    putchar('\n');
    
    return (0);
}

int compare(const void *a, const void *b)
{
    return( *(int *)a - *(int *)b);
}
