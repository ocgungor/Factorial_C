//
//  Factorial.c
//  Factorial_C
//
//  Created by Oguzhan Gungor on 24/04/13.
//  Copyright (c) 2013 Oguzhan Gungor. All rights reserved.
//

#include "Factorial.h"


int factorial(int num){
    
    if(num == 1)
        return 1;
    else return num * factorial(num-1);
}