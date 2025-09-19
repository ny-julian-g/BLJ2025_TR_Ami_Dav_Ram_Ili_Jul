//
// Created by jgasser on 19.09.2025.
//
#include <stdio.h>
#include "otheroperators.h"

int exponential(int inputa,int inputb) {
    int result = 1;
    for (0 == inputb; --inputb;) {
        result = inputa * inputa ;
    }
    return result;
}