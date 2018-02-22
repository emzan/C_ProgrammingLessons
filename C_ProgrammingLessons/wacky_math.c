//
//  wacky_math.c
//  C_ProgrammingLessons
//
//  Created by HI on 2018/2/22.
//  Copyright © 2018年 kuangchi. All rights reserved.
//

#include "wacky_math.h"
#include <stdlib.h>

int wacky_add(int a, int b){
    return a + b + rand()%10;
}
