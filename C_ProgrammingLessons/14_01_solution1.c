//
//  14_01_solution1.c
//  C_ProgrammingLessons
//
//  Created by George Martinson on 24/02/2018.
//  Copyright © 2018 kuangchi. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define SIZE 64

int main()
{
    char string[SIZE];
    int length,outer,inner,temp;
    
    /* Get the string */
    printf("Type some text: ");
    fgets(string,SIZE,stdin);
    length = strlen(string);
    
    /* Sort the string */
    for (outer = 0; outer < length; outer++)
        for(inner=outer+1;inner<length;inner++)
        {
            if( string[outer] > string[inner])
            {
                temp = string[inner];
                string[inner] = string[outer];
                string[outer] = temp;
            }
        }
    
    /* Display the sorted array */
    puts("Sorted string:");
    printf("%s\n",string);
    
    return (0);
}
