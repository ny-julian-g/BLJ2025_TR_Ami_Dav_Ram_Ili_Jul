//
// Created by jgasser on 19.09.2025.
//
#include <stdio.h>
#include "otheroperators.h"

double exponential() {
    double inputa;
    double inputb;
    double result;

    printf("Enter the number, you wanna emPower\n");
    if (scanf("%lf", &inputa) == 1);
    else {
        do  {
            fflush(stdin);
            printf("Invalid Input, please Enter again:\n");
        } while (scanf("%lf", &inputa) != 1);
    }

    printf("Enter the number, that should be your exponential\n");
    if (scanf("%lf", &inputb) == 1);
    else {
        do  {
            fflush(stdin);
            printf("Invalid Input, please Enter again:\n");
        } while (scanf("%lf", &inputb) != 1);
    }

    if (inputb <= 0) {
       result = 1;
    }
    else if (inputa == 0 ||inputa == 1) {
        result = inputa;
    }

    else {
        int exponent = inputb;
        if (exponent < 0) {
            exponent = -exponent;
        }

        result = 1;
        for (int i = 0;i < exponent; i++) {
            result = result * inputa ;
        }
    }
    printf("The Result is: %lf\n", result);
}

//--------------------------------------------------
//--------------------------------------------------

double calcsqrt(){
    double inputa;
    printf("Enter the number, you wanna take the Root of:\n");
    if (scanf("%lf", &inputa) == 1);
    else {
        do  {
            fflush(stdin);
            printf("Invalid Input, please Enter again:\n");
        } while (scanf("%lf", &inputa) != 1);
    }

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
    printf("The Result is: %lf", z);
}

//-----------------------------------------
//-----------------------------------------
double faculty() {
    double inputa;
    printf("Enter the number, whose faculty you wanna know:\n");
    if (scanf("%lf", &inputa) == 1);
    else {
        do  {
            fflush(stdin);
            printf("Invalid Input, please Enter again:\n");
        } while (scanf("%lf", &inputa) != 1);
    }
    int faculty = inputa;
    for (int i = 1; i < inputa; i++ )
        {     faculty *= i; }
    printf("The Result is: %lf", faculty);
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
