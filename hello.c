
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
    return auswahl;
}

