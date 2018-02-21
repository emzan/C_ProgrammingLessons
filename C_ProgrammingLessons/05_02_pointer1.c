//
//  05_02_pointer1.c
//  C_ProgrammingLessons
//
//  Created by George Martinson on 22/02/2018.
//  Copyright © 2018 kuangchi. All rights reserved.
//

#include <stdio.h>

int main() {
    
    int pokey;
    int *p;
    
    p = &pokey;
    
    printf("The address of pokey is %p\n", &pokey);
    printf("The address of pokey is %p\n", p);
    
    return(0);
    
    
}

