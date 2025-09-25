#include <stdio.h>
#include "otheroperators.h"
#include "calc_08.h"
#include "hello.h"
int main(void) {
    int auswahl = hello();
    switch (auswahl) {
        case 1:
            printf(">> Grundrechner gestartet!\n");
            grundrechner();
            break;
        case 2:
            printf(">> Exponential gestartet\n");
            exponential();
            break;
        case 3:
            printf(">> Wurzel Berechnung gestartet!\n");
            calcsqrt();
            break;
        case 4:
            printf(">> Fakultät Berechnung gestartet!\n");
            faculty();
            break;

        default:
            printf("Ungueltige Eingabe!\n");
    }
}