//
// Created by Startklar on 19.09.2025.
//
#include <stdio.h>
#include <stdlib.h>

int grundrechner() {
    char operator;
    double current_result, next_number;



    printf("Enter the first number: \n");
    if (scanf("%lf", &current_result) == 1);
    else {
        do  {
            fflush(stdin);
            printf("Invalid Input, please Enter again:\n");
        } while (scanf("%lf", &current_result) != 1);
    }
    /*if (scanf("%lf", &current_result) != 1) {
        printf("Invalid input. Exiting.\n");
        return 1;
    }*/

    printf("Result: %.2lf\n", current_result);

    while(1) {

        printf("Enter an operator (+, -, *, /) or '=' to finish: \n");
        scanf(" %c", &operator);

        if (operator == '=') {
            printf("Final result is: %.2lf\n", current_result);
            break;
        }

        printf("Enter the next number: \n");
        if (scanf("%lf", &next_number) == 1);
        else {
            do  {
                fflush(stdin);
                printf("Invalid Input, please Enter again:\n");
            } while (scanf("%lf", &next_number) != 1);
        }
        /*if (scanf("%lf", &next_number) != 1) {
            printf("Invalid input. Exiting.\n");
            return 1;
        }*/

        switch(operator) {
            case '+':
                current_result += next_number;
                printf("Result: %.2lf\n", current_result);
                break;
            case '-':
                current_result -= next_number;
                printf("Result: %.2lf\n", current_result);
                break;
            case '*':
                current_result *= next_number;
                printf("Result: %.2lf\n", current_result);
                break;
            case '/':
                if (next_number != 0) {
                    current_result /= next_number;
                    printf("Result: %.2lf\n", current_result);
                } else {
                    printf("Error! Division by zero is not allowed.\n");

                    break;
                }
                break;
            default:
                printf("Invalid operator entered. Please try again.\n");
                break;
        }
    }
}

//#include "calc_08.h"