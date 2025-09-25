//
// Created by jgasser on 19.09.2025.
//
#include <stdio.h>
#include "otheroperators.h"

double exponential() {
    double inputa;
    double inputb;
    double result;
    char again = 'y';
while (again == 'y') {
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

    if (inputb == 0) {
        result = 1;
    }
    else if (inputa == 0 ||inputa == 1) {
        result = inputa;
    }

    else {
        float exponent = inputb;
        if (exponent < 0) {
            exponent = -exponent;
        } // makes negative Exponent positive for the logic down there

        result = 1;
        for (int i = 0;i < inputb; i++) {
            result = result * inputa ;
        }
        if (inputb < 0) {
            result = 1.0 / result; // makes the positive Exponent negative again, because of up there
        }
    }
    //-----------------
    printf("The Result is: %lf\n", result);
    printf("do you want to calculate again? (y/any other)\n");
    scanf(" %c", &again);
    if ( again == 'Y' || again == 'y') {
        again = 'y';
        fflush(stdin);
    }
    else {
        again = 'n';
    }
}
}
//--------------------------------------------------
//--------------------------------------------------

double calcsqrt(){
    double inputa;
    char again = 'y';
    while (again == 'y') {
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
        printf("The Result is: %lf\n", z);
        printf("do you want to calculate again? (y/any other)\n");
        scanf(" %c", &again);
        if ( again == 'Y' || again == 'y') {
            again = 'y';
            fflush(stdin);
        }
        else {
            again = 'n';
        }
    }
}
//-----------------------------------------
//-----------------------------------------
double faculty() {
    double inputa;
    char again = 'y';
    while (again == 'y') {
        printf("Enter the number, whose faculty you wanna know:\n");
        if (scanf("%lf", &inputa) == 1);
        else {
            do  {
                fflush(stdin);
                printf("Invalid Input, please Enter again:\n");
            } while (scanf("%lf", &inputa) != 1);
        }
        int n = inputa;
        int result = n;

        for (int i = n-1; i > 2; i--) {
            result = result * inputa;
        }
        printf("The Result is: %d\n", result);
        printf("do you want to calculate again? (y/any other)\n");
        scanf(" %c", &again);
        if ( again == 'Y' || again == 'y') {
            again = 'y';
            fflush(stdin);
        }
        else {
            again = 'n';
        }
    }

<<<<<<< Updated upstream
=======
    int n = inputa;
    int result = n;

    for (int i = n-1; i > 2; i--) {
        result = result * inputa;
    }
    printf("The Result is: %d\n", result);
>>>>>>> Stashed changes
}
