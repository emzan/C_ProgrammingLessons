//
//  03_12_return1.c
//  C_ProgrammingLessons
//
//  Created by George Martinson on 22/02/2018.
//  Copyright © 2018 kuangchi. All rights reserved.
//

#include <stdio.h>

char gimmeAnA(void);

int main()
{
    char grade;
    
    grade = gimmeAnA();
    printf("On this test you received an %c.\n",grade);
    
    return (0);
}

char gimmeAnA(void)
{
    return('A');
}

