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
int root(int inputa) {
    /*int result = 0;
    int halfa = inputa / 2;
    result = halfa * halfa;
    printf("%d", result);*/
}