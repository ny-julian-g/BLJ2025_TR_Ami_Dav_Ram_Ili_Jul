//
// Created by jgasser on 19.09.2025.
//
#include <stdio.h>
#include "otheroperators.h"

double exponential(double inputa,double inputb) {
    double result;
    if (inputb == 0) {
       result = 1;
    }
    else if (inputa == 0 ||inputa == 1) {
        result = inputa;
    }
    else {
        for (0 == inputb; --inputb;) {
            result = inputa * inputa ;
        }
    }
    return result;
}

//--------------------------------------------------


double calcsqrt(double inputa){
    if (inputa < 2)
        return inputa;

    double y = inputa;
    double z = (y + (inputa / y)) / 2;

    double diff = y - z;
    if (diff < 0) diff = -diff;
    while (diff >= 0.00001) {
        y = z;
        z = (y + (inputa / y)) / 2;
        diff = y - z;
        if (diff < 0) diff = -diff;
    }
    return z;
}

//---------------------------------

double faculty(double inputa) {
    int faculty = inputa;
    for (int i = 2; i < inputa; i++ )
        {     faculty *= i; }
    return faculty;
    // mein Gefallener Code🥀:
    /*int result;
    int i = inputa;
    inputa = inputa -1;
    result = i * inputa;
    for (inputa == 0; --inputa;) {
        result = result * inputa;
    }
    return result;
    */
}
