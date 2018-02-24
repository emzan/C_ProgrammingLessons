//
//  14_01_solution2.c
//  C_ProgrammingLessons
//
//  Created by George Martinson on 24/02/2018.
//  Copyright © 2018 kuangchi. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 64

int compare(const void *a, const void *b);

int main()
{
    char string[SIZE];
    int length;
    
    /* Get the string */
    printf("Type some text: ");
    fgets(string,SIZE,stdin);
    length = strlen(string);
    
    /* Sort the string */
    qsort(string,length,sizeof(char),compare);
    
    /* Display the sorted array */
    puts("Sorted string:");
    printf("%s\n",string);
    
    return (0);
}

int compare(const void *a, const void *b)
{
    return( *(char *)a - *(char *)b );
}
