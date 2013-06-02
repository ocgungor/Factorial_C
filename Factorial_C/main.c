//
//  main.c
//  Factorial_C
//
//  Created by Oguzhan Gungor on 24/04/13.
//  Copyright (c) 2013 Oguzhan Gungor. All rights reserved.
//

#include <stdio.h>
#include "Factorial.h"

int main(int argc, const char * argv[])
{
    int num = 5;
    printf("%d! = %d\n",num, factorial(num));
 
    return 0;
}

