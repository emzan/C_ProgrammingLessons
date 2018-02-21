//
//  03_08_function1.c
//  C_ProgrammingLessons
//
//  Created by George Martinson on 22/02/2018.
//  Copyright © 2018 kuangchi. All rights reserved.
//

#include <stdio.h>

void blorf(void);

int main ()
{
    
    puts("The main() function always runs first");
    blorf();
    puts("Thanks, blorf()");
    
    return(0);
}

void blorf(void) {
    puts("The blorf() function runs when it's called");
}

