//
//  05_08_allocate2.c
//  C_ProgrammingLessons
//
//  Created by George Martinson on 22/02/2018.
//  Copyright © 2018 kuangchi. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define SIZE 1024

int main()
{
    char *sto;
    sto = (char*)malloc(sizeof(char)*SIZE);
    if(sto == NULL){
        puts("Memory error");
        return (1);
    }
    else
    {
        printf("%d bytes of memory allocated at %p\n",SIZE,sto);
    }
    return (0);
}

//good luck

