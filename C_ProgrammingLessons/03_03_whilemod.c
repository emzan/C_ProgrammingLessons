//
//  03_03_whilemod.c
//  C_ProgrammingLessons
//
//  Created by George Martinson on 22/02/2018.
//  Copyright © 2018 kuangchi. All rights reserved.
//

#include <stdio.h>


int main ()
{
    int a,b;
    
    
    a = 7;
    while (a<30)
    {
        b = a % 7;
        printf("%d %% 7 = %d\n", a,b);
        a++;
    }
    
    
    
    
    return(0);
    
}

