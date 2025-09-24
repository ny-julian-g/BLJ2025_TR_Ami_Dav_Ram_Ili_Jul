//
// Created by Startklar on 19.09.2025.
//
#include <stdio.h>
#include <stdlib.h> // Required for exit()

int grundrechner() {
    char operator;
    double current_result, next_number;

    // Prompt for the first number to begin the calculation
    printf("Enter the first number: ");
    if (scanf("%lf", &current_result) != 1) {
        printf("Invalid input. Exiting.\n");
        return 1;
    }

    printf("Result: %.2lf\n", current_result);

    // Start a loop to accept more numbers and operators
    while(1) {
        // Prompt for the operator and next number
        printf("Enter an operator (+, -, *, /) or '=' to finish: ");
        scanf(" %c", &operator);

        // Check if the user wants to end the calculation
        if (operator == '=') {
            printf("Final result is: %.2lf\n", current_result);
            break; // Exit the loop
        }

        printf("Enter the next number: ");
        if (scanf("%lf", &next_number) != 1) {
            printf("Invalid input. Exiting.\n");
            return 1;
        }

        // Perform the calculation based on the operator
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
                    // You can choose to exit or continue with the previous result
                    break;
                }
                break;
            default:
                printf("Invalid operator entered. Please try again.\n");
                break;
        }
    }

    return 0;
}

//#include "calc_08.h"