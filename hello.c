
#include "hello.h"
#include <stdio.h>

#include "calc_08.h"
#include "otheroperators.h"

int hello() {
    int auswahl = 0;
    printf("Hello\n\n");
    printf("1 -> Standardrechner\n");
    printf("2 -> Potenz\n");
    printf("3 -> Wurzel\n");
    printf("4 -> Fakultaet\n");
    printf("5 -> Rock, Paper, Scissors\n");

    scanf("%d", &auswahl);
    if (auswahl < 1 && auswahl > 5);
    else {
        int i = 0;
        do {
            i = i + 1;
            fflush(stdin);
            if (i > 2) {
                printf("Invalid Choice, please enter again:\n");
                printf("1 -> Standardrechner\n");
                printf("2 -> Potenz\n");
                printf("3 -> Wurzel\n");
                printf("4 -> Fakultaet\n");
                printf("5 -> Rock, Paper, Scissors\n");
                scanf("%d", &auswahl);
            }
            else {
                printf("Invalid Choice, please enter again:\n");
                scanf("%d", &auswahl);
            }
        } while (auswahl < 1 || auswahl > 5);
        i = 0;
    }
    return auswahl;
}

